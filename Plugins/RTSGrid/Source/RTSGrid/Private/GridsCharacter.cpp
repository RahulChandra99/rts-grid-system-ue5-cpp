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

// Sets default values
AGridsCharacter::AGridsCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->SetRelativeRotation(FRotator(-60.0f, 0.0f, 0.0f));
	SpringArm->TargetArmLength = 800.f;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	PlacementLocation = FVector::ZeroVector;
}

// Called when the game starts or when spawned
void AGridsCharacter::BeginPlay()
{
	Super::BeginPlay();

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

	if (!Controller)
	{
		return;
	}

	FHitResult HitResult;
	bool HasHit = Controller->GetHitResultUnderCursorByChannel(ETraceTypeQuery::TraceTypeQuery1, true, HitResult);

	if (!HasHit)
	{
		return;
	}

	AGridSystem* Grid = Cast<AGridSystem>(HitResult.GetActor());
	if (Grid && !TargetGrid)
	{
		TargetGrid = Grid;
		return;
	}

	PlacementLocation = TargetGrid->GetGridRelativeFromWorld(HitResult.Location);

	if (BuildingBase)
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

	PlayerInputComponent->BindAction("LMBAction", EInputEvent::IE_Pressed, this, &AGridsCharacter::HandlePlacement);
}

void AGridsCharacter::HandlePlacement() 
{
	if (BuildingBase)
	{
		if (TargetGrid)
		{
			int32 CellID;
			FGridCoord Location = TargetGrid->GetCoordinateFromRelative(PlacementLocation, CellID);
			FGridCoord BlockedTile = FGridCoord(Location);
			TargetGrid->BlockedTiles.Add(BlockedTile);
			BuildingBase->OnPlacementCompleted();
			BuildingBase = nullptr;
			return;
		}
	}

	if (BuildingBaseType && !BuildingBase)
	{
		FActorSpawnParameters Params;
		Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		AActor* Spawn = GetWorld()->SpawnActor<AActor>(BuildingBaseType, PlacementLocation, FRotator(0), Params);
		BuildingBase = Cast<ABuildingBase>(Spawn);
		BuildingBase->OnPlacementBegin();
	}
}

