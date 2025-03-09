// Fill out your copyright notice in the Description page of Project Settings.

#include "TopDownPlayerController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "RTSBasePawn.h"

ATopDownPlayerController::ATopDownPlayerController()
{
	bShowMouseCursor = true;
}

void ATopDownPlayerController::Select(const FInputActionValue& Value) 
{
	FHitResult HitResult;
	GetHitResultUnderCursor(ECC_Camera, false, HitResult);

	if(SelectedActor)
	{
		if(SelectedActor.GetClass()->ImplementsInterface(USelectableInterface::StaticClass()))
		{
			ISelectableInterface::Execute_SelectActor(SelectedActor,false);
		}
	}
	
	SelectedActor = HitResult.GetActor();

	if(SelectedActor)
	{
		if(SelectedActor.GetClass()->ImplementsInterface(USelectableInterface::StaticClass()))
		{
			ISelectableInterface::Execute_SelectActor(SelectedActor,true);
		}
	}
}


void ATopDownPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (!InputMappingContext) 
	{
		UE_LOG(LogTemp, Error, TEXT("InputMappingContext is NULL! Make sure it's set in Blueprint."));
		return;
	}

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	if (Subsystem)
	{
		Subsystem->AddMappingContext(InputMappingContext, 0);
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		if (!SelectAction) return;

		EnhancedInputComponent->BindAction(SelectAction, ETriggerEvent::Triggered, this, &ATopDownPlayerController::Select);
	}
}
