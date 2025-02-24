// Fill out your copyright notice in the Description page of Project Settings.


#include "RTSCameraPawn.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystemInterface.h"
#include "EnhancedInputSubsystems.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ARTSCameraPawn::ARTSCameraPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("DefaultSceneRoot");
	CameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");
	CameraComponent->SetupAttachment(RootComponent);
	
	MoveSpeed = FVector2D(500,500);
	ScreenEdgePadding = FVector2D(50,50);

	CameraHeightSpeed = 700;
	RotationSpeed = 500;
	bShouldRotate = false;
	
	SetActorRotation(FRotator::MakeFromEuler(FVector3d(0,-30,0)));
}

// Called when the game starts or when spawned
void ARTSCameraPawn::BeginPlay()
{
	Super::BeginPlay();

	if(PlayerController = Cast<APlayerController>(Controller); IsValid(PlayerController))
	{
		PlayerController->SetShowMouseCursor(true);
	}
}

// Called every frame
void ARTSCameraPawn::Tick(float DeltaTime)
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

}

// Called to bind functionality to input
void ARTSCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	
	if(const auto Subsystem = Cast<APlayerController>(GetController())->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
	{
		Subsystem->AddMappingContext(MappingContext,0);
	}

	if(const auto EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this,&ARTSCameraPawn::MoveTriggered);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Completed, this,&ARTSCameraPawn::MoveCompleted);

		
		EnhancedInputComponent->BindAction(CameraHeightAction, ETriggerEvent::Triggered, this,&ARTSCameraPawn::CameraHeightTriggered);

		
		EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Started, this,&ARTSCameraPawn::RotationStarted);
		EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Canceled, this,&ARTSCameraPawn::RotationCompleted);
		EnhancedInputComponent->BindAction(RotateAction, ETriggerEvent::Completed, this,&ARTSCameraPawn::RotationCompleted);
		
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this,&ARTSCameraPawn::LookTriggered);

	}
	
}

void ARTSCameraPawn::MoveTriggered(const FInputActionValue& InValue)
{
	CurrentInputMoveSpeed = InValue.Get<FVector2D>();
}


void ARTSCameraPawn::MoveCompleted()
{
	CurrentInputMoveSpeed = FVector2D::Zero();
}

void ARTSCameraPawn::CameraHeightTriggered(const FInputActionValue& InValue)
{
	auto Location = GetActorLocation();
	Location.Z += InValue.Get<float>() * CameraHeightSpeed * FApp::GetDeltaTime();
	SetActorLocation(Location);
}

void ARTSCameraPawn::RotationStarted()
{
	bShouldRotate = true;
}

void ARTSCameraPawn::RotationCompleted()
{
	bShouldRotate = false;
}

void ARTSCameraPawn::LookTriggered(const FInputActionValue& InValue)
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

