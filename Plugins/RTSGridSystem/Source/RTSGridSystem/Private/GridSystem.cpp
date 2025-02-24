// Fill out your copyright notice in the Description page of Project Settings.


#include "GridSystem.h"

// Sets default values
AGridSystem::AGridSystem()
	: GridDimensions(FGridCoord(4))
	, CellSize(100.0)
	, bShowPreviewGrid(true)
	, bShowTileTextInfo(false)
	, bDrawBoundingBox(true)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

TArray<FGridCoord> AGridSystem::GenerateGrid()
{
	GeneratedGrid.Empty();
	
	int xMin = 0;
	int xMax = GridDimensions.Row;
	int yMin = 0;
	int yMax = GridDimensions.Column;

	for (int i = xMin; i< xMax; i++ )
	{
		for (int j = yMin; j < yMax; j++)
		{
			FGridCoord Coord;
			Coord.Row = i;
			Coord.Column = j;
			GeneratedGrid.Emplace(Coord);
		}
	}

	return GeneratedGrid;
}

// Called when the game starts or when spawned
void AGridSystem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGridSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

