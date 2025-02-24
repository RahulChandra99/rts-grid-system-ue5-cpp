// Fill out your copyright notice in the Description page of Project Settings.


#include "GridsCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "GridSystem.h"
#include "BuildingBase.h"
#include "GridCoords.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystemInterface.h"
#include "EnhancedInputSubsystems.h"

// Sets default values
AGridsCharacter::AGridsCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f));
	SpringArm->TargetArmLength = 800.f;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);*/

	RootComponent = CreateDefaultSubobject<USceneComponent>("DefaultSceneRoot");
	CameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");
	CameraComponent->SetupAttachment(RootComponent);

	PlacementLocation = FVector::ZeroVector;

	MoveSpeed = FVector2D(500,500);
	ScreenEdgePadding = FVector2D(50,50);

	CameraHeightSpeed = 1300;
	RotationSpeed = 500;
	bShouldRotate = false;
	
	SetActorRotation(FRotator::MakeFromEuler(FVector3d(0,-30,0)));
}

// Called when the game starts or when spawned
void AGridsCharacter::BeginPlay()
{
	Super::BeginPlay();

	if(PlayerController = Cast<APlayerController>(Controller); IsValid(PlayerController))
	{
		PlayerController->SetShowMouseCursor(true);
	}
	
	Controller = UGameplayStatics::GetPlayerController(this, 0);
	Controller->bShowMouseCursor = true;

	FInputModeGameAndUI GameAndUI;
	GameAndUI.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	GameAndUI.SetHideCursorDuringCapture(true);

	Controller->SetInputMode(GameAndUI);
	
}

// Called every frame
void AGridsCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto CurrentMoveSpeed = CurrentInputMoveSpeed;

	if (PlayerController) // Ensure PlayerController is valid
	{
		FVector2D MousePosition;
		if (CurrentInputMoveSpeed.IsZero() && PlayerController->GetMousePosition(MousePosition.X, MousePosition.Y))
		{
			int32 ViewportWidth, ViewportHeight;
			PlayerController->GetViewportSize(ViewportWidth, ViewportHeight);

			const auto X = (MousePosition.X <= ScreenEdgePadding.X) ? -1 : (MousePosition.X >= ViewportWidth - ScreenEdgePadding.X) ? 1 : 0;

			const auto Y = (MousePosition.Y <= ScreenEdgePadding.Y) ? -1 : (MousePosition.Y >= ViewportHeight - ScreenEdgePadding.Y) ? 1 : 0;

			CurrentMoveSpeed = FVector2D(X, -Y);
		}
	}

	FVector ForwardVector(GetActorForwardVector().X, GetActorForwardVector().Y, 0);
	if (!ForwardVector.IsNearlyZero()) // Prevent division by zero
	{
		ForwardVector.Normalize();
	}

	const auto Forward = ForwardVector * CurrentMoveSpeed.Y * MoveSpeed.Y * DeltaTime;
	const auto SideWays = GetActorRightVector() * CurrentMoveSpeed.X * MoveSpeed.X * DeltaTime;

	const auto NextLocation = GetActorLocation() + Forward + SideWays;
	SetActorLocation(NextLocation);
	
	if (!Controller) return;

	FHitResult HitResult;
	bool HasHit = Controller->GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, HitResult);

	if (!HasHit) return;

	AGridSystem* Grid = Cast<AGridSystem>(HitResult.GetActor());
	if (Grid)
	{
		TargetGrid = Grid;
		PlacementLocation = TargetGrid->GetGridRelativeFromWorld(HitResult.Location);
	}

	if (BuildingBase && TargetGrid)
	{
		int32 CellID;
		FGridCoord Location = TargetGrid->GetCoordinateFromRelative(PlacementLocation, CellID);

		if (TargetGrid->IsValidLocation(Location))
		{
			FVector CellCenter = TargetGrid->GetCellCenterFromRelative(PlacementLocation, true);
			BuildingBase->SetActorLocation(CellCenter);
		}
	}
}

// Called to bind functionality to input
void AGridsCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if(const auto Subsystem = Cast<APlayerController>(GetController())->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
	{
		Subsystem->AddMappingContext(MappingContext,0);
	}

	if(const auto EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this,&AGridsCharacter::MoveTriggered);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this,&AGridsCharacter::MoveCompleted);

		
		EnhancedInputComponent->BindAction(CameraHeightAction, ETriggerEvent::Triggered, this,&AGridsCharacter::CameraHeightTriggered);

		
		EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Started, this,&AGridsCharacter::RotationStarted);
		EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Canceled, this,&AGridsCharacter::RotationCompleted);
		EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Completed, this,&AGridsCharacter::RotationCompleted);
		
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this,&AGridsCharacter::LookTriggered);

		EnhancedInputComponent->BindAction(LMBAction, ETriggerEvent::Triggered, this, &AGridsCharacter::HandlePlacement);

	}
	
	
}

void AGridsCharacter::HandlePlacement() 
{
	if (!TargetGrid) return;

	if (BuildingBase)
	{
		int32 CellID;
		FGridCoord Location = TargetGrid->GetCoordinateFromRelative(PlacementLocation, CellID);

		if (TargetGrid->IsValidLocation(Location))
		{
			FVector CellCenter = TargetGrid->GetCellCenterFromRelative(PlacementLocation, true);
            
			FGridCoord BlockedTile = TargetGrid->GetCoordinateFromRelative(CellCenter, CellID);
			TargetGrid->BlockedTiles.Add(BlockedTile); 

			BuildingBase->SetActorLocation(CellCenter);
			BuildingBase->OnPlacementCompleted();
			BuildingBase = nullptr;
		}
		return;
	}

	if (BuildingBaseType && !BuildingBase)
	{
		FActorSpawnParameters Params;
		Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		AActor* Spawn = GetWorld()->SpawnActor<AActor>(BuildingBaseType, PlacementLocation, FRotator(0), Params);
		BuildingBase = Cast<ABuildingBase>(Spawn);

		if (BuildingBase)
		{
			BuildingBase->OnPlacementBegin();
		}
	}
}


void AGridsCharacter::MoveTriggered(const FInputActionValue& InValue)
{
	CurrentInputMoveSpeed = InValue.Get<FVector2D>();
}


void AGridsCharacter::MoveCompleted()
{
	CurrentInputMoveSpeed = FVector2D::Zero();
}

void AGridsCharacter::CameraHeightTriggered(const FInputActionValue& InValue)
{
	auto Location = GetActorLocation();
	Location.Z += InValue.Get<float>() * CameraHeightSpeed * FApp::GetDeltaTime();
	SetActorLocation(Location);
}

void AGridsCharacter::RotationStarted()
{
	bShouldRotate = true;
}

void AGridsCharacter::RotationCompleted()
{
	bShouldRotate = false;
}

void AGridsCharacter::LookTriggered(const FInputActionValue& InValue)
{
	const auto& LookVector = InValue.Get<FVector2D>();

	if(bShouldRotate)
	{
		FRotator CurrentRotation = GetActorRotation();
		CurrentRotation.Pitch += RotationSpeed * FApp::GetDeltaTime() * LookVector.Y;
		CurrentRotation.Yaw += RotationSpeed * FApp::GetDeltaTime() * LookVector.X;
		SetActorRotation(CurrentRotation);
	}
}


