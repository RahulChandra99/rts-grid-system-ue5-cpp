#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "RTSCameraPawn.generated.h"

class UInputAction;
struct FInputActionValue;
class UInputMappingContext;

UCLASS()
class RTSGRID_API ARTSCameraPawn : public APawn
{
	GENERATED_BODY()

public:
	ARTSCameraPawn();

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
};
