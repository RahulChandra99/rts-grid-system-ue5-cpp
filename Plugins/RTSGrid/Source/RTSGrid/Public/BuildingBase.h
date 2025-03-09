// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BuildingBase.generated.h"

UCLASS()
class RTSGRID_API ABuildingBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABuildingBase();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Placeable")
	void OnPlacementBegin();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Placeable")
	void OnPlacementCompleted();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Placeable")
	void OnPlacementCancelled();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Placeable")
	TSubclassOf<AActor> ConstructionProxy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Placeable")
	TSubclassOf<AActor> PlacementProxy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Placeable")
	float BuildDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Placeable")
	float BuildDurationMultiply;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Placeable")
	class UStaticMeshComponent* StaticMesh;
	
	

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
private: 

	AActor* BuildProxy;
	AActor* ConstructionProxyInstance;
};



