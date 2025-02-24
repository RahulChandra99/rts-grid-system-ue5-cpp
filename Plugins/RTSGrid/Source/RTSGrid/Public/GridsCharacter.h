// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GridsCharacter.generated.h"

UCLASS()
class RTSGRID_API AGridsCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGridsCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Camera")
	class UCameraComponent *Camera;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mesh");
	TSubclassOf<class ABuildingBase> BuildingBaseType;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:

	ABuildingBase* BuildingBase;
	APlayerController *Controller;
	FVector PlacementLocation;
	class AGridSystem* TargetGrid;
	
	void HandlePlacement();
	
};
