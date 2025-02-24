// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridCoords.h"
#include "GridSystem.generated.h"

class UHierarchicalInstancedStaticMeshComponent;
class UTextRenderComponent;
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

	UFUNCTION(BlueprintPure, Category="Grids")
	FVector GetGridOriginRelative();
	
	UFUNCTION(BlueprintPure, Category="Grids")
	FVector GetGridOriginWorld();

	UFUNCTION(BlueprintPure, Category="Grids")
	FVector2D GetGridSize();

	UFUNCTION(BlueprintPure, Category="Grids")
	FVector2D GetGridExtents();

	UFUNCTION(BlueprintPure, Category="Grids")
	FVector GetGridRelativeFromWorld(FVector WorldLocation);

	UFUNCTION(BlueprintPure, Category="Grids")
	FVector GetCellCenterFromRelative(FVector RelativeLocation, bool bReturnWorldSpace);

	UFUNCTION(BlueprintPure, Category="Grids")
	bool IsInGridBounds(FGridCoord Coordinate);

	UFUNCTION(BlueprintPure, Category="Grids")
	bool IsClearTile(FGridCoord Coordinate);

	UFUNCTION(BlueprintPure, Category="Grids")
	bool IsValidLocation(FGridCoord Coordinate);

	UFUNCTION(BlueprintPure, Category="Grids")
	FGridCoord GetCoordinateFromRelative(FVector RelativeLocation, int& CellID);

	UFUNCTION(BlueprintPure, Category="Grids")
	FGridCoord GetCoordinateFromCellID(int ID) const;

	UFUNCTION(BlueprintPure, Category="Grids")
	int GetCellIDFromCoordinate(FGridCoord Coordinate);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	void GenerateVisualGrid();

	TArray<UTextRenderComponent*> TextComponents;


};
