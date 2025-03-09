// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SelectableInterface.h"
#include "GameFramework/Pawn.h"
#include "RTSBasePawn.generated.h"


UCLASS()
class REALTIMESTRATEGY_API ARTSBasePawn : public APawn, public ISelectableInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ARTSBasePawn();
	
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player", meta = (AllowPrivateAccess = true))
	TObjectPtr<class UCapsuleComponent> CapsuleComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player", meta = (AllowPrivateAccess = true))
	TObjectPtr<USkeletalMeshComponent> SkeletalMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player", meta = (AllowPrivateAccess = true))
	TObjectPtr<class UFloatingPawnMovement> FloatingMovementComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player", meta = (AllowPrivateAccess = true))
	TObjectPtr<UStaticMeshComponent> SelectedIndicator;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void SelectActor_Implementation(const bool Select) override;
};
