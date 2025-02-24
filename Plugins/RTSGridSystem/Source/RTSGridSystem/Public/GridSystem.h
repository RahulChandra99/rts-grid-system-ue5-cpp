// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridCoords.h"
#include "GridSystem.generated.h"

class UHierarchicalInstancedStaticMeshComponent;

UCLASS(HideCategories=(Physics, LOD), CollapseCategories = (Actor, Input), AutoExpandCategories=(Grids), ClassGroup = "GridSystem")
class RTSGRIDSYSTEM_API AGridSystem : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Grids, meta = (AllowPrivateAccess = true))
	class USceneComponent* RootComp;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Grids, meta = (AllowPrivateAccess = true))
	UHierarchicalInstancedStaticMeshComponent* PreviewGridHISM;
public:	
	
	AGridSystem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grids")
	FGridCoord GridDimensions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grids")
	float CellSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grids")
	TSet<FGridCoord> BlockedTiles;

	UPROPERTY( BlueprintReadOnly, Category="Grids")
	TArray<FGridCoord> GeneratedGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grids")
	bool bShowPreviewGrid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grids")
	bool bShowTileTextInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Grids")
	bool bDrawBoundingBox;



	UFUNCTION(BlueprintCallable, Category="Grids")
	TArray<FGridCoord> GenerateGrid();

	
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
