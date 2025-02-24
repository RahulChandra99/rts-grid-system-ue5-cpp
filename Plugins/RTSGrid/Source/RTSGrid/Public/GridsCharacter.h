// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GridsCharacter.generated.h"

class UInputAction;
struct FInputActionValue;
class UInputMappingContext;

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
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "RTSCamera")
	TObjectPtr<class UCameraComponent> CameraComponent;

	UPROPERTY(EditAnywhere, Category = "RTSCamera")
	FVector2D ScreenEdgePadding;

	UPROPERTY(EditAnywhere, Category = "RTSCamera")
	FVector2D MoveSpeed;

	UPROPERTY()
	TObjectPtr<APlayerController> PlayerController;

	UPROPERTY(VisibleAnywhere, Category = "RTSCamera")
	FVector2D CurrentInputMoveSpeed;

	void MoveTriggered(const FInputActionValue& InValue);
	void MoveCompleted();
	void CameraHeightTriggered(const FInputActionValue& InValue);
	void RotationStarted();
	void RotationCompleted();
	void LookTriggered(const FInputActionValue& InValue);

	UPROPERTY(EditAnywhere, Category = "RTSCamera")
	float CameraHeightSpeed;

	UPROPERTY(EditAnywhere, Category = "RTSCamera")
	float RotationSpeed;

	UPROPERTY(EditAnywhere, Category = "RTSCamera")
	bool bShouldRotate;

	UPROPERTY(EditAnywhere, Category = "RTSCamera")
	TObjectPtr<UInputMappingContext> MappingContext;

	UPROPERTY(EditAnywhere, Category = "RTSCamera")
	TObjectPtr<UInputAction> MoveAction;

	UPROPERTY(EditAnywhere, Category = "RTSCamera")
	TObjectPtr<UInputAction> CameraHeightAction;

	UPROPERTY(EditAnywhere, Category = "RTSCamera")
	TObjectPtr<UInputAction> RotateAction;

	UPROPERTY(EditAnywhere, Category = "RTSCamera")
	TObjectPtr<UInputAction> LookAction;

private:

	ABuildingBase* BuildingBase;
	APlayerController *Controller;
	FVector PlacementLocation;
	class AGridSystem* TargetGrid;
	
	void HandlePlacement();
	
};
