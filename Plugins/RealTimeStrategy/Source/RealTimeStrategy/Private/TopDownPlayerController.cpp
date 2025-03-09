// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerController.h"
#include "EnhancedInputSubsystems.h"

ATopDownPlayerController::ATopDownPlayerController()
{
	bShowMouseCursor = true;
}

void ATopDownPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (!InputMappingContext) return;

	UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	if (Subsystem)
	{
		Subsystem->AddMappingContext(InputMappingContext, 0);
	}
}
