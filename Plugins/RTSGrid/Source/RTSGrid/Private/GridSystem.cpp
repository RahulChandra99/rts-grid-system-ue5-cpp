// Fill out your copyright notice in the Description page of Project Settings.


#include "GridSystem.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "Engine/StaticMesh.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AGridSystem::AGridSystem()
	: GridDimensions(FGridCoord(4))
	, CellSize(100.0f)
	, bShowPreviewGrid(true)
	, bShowTileTextInfo(false)
	, bDrawBoundingBox(true)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GridSystemRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(GridSystemRootComponent);

	PreviewGridHISM = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("PreviewGrid"));
	PreviewGridHISM->SetupAttachment(GridSystemRootComponent);

	ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneMesh(TEXT("StaticMesh'/Engine/BasicShapes/Plane.Plane'"));

	if (PlaneMesh.Succeeded())
	{
		PreviewGridHISM->SetStaticMesh(PlaneMesh.Object);
	}
}

// Called when the game starts or when spawned
void AGridSystem::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGridSystem::OnConstruction(const FTransform& Transform) 
{
	Super::OnConstruction(Transform);

	GenerateGrid();
}

// Called every frame
void AGridSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGridSystem::GenerateVisualGrid() 
{
	if (!bShowPreviewGrid)
	{
		PreviewGridHISM->ClearInstances();
	}

	for (auto* TextComponent : TextComponents) 
	{
		TextComponent->DestroyComponent();
	}

	TextComponents.Empty();
	PreviewGridHISM->ClearInstances();
	PreviewGridHISM->bAutoRebuildTreeOnInstanceChanges = false;

	for (int i = 0; i < GeneratedGrid.Num(); i++)
	{
		FGridCoord CurrentTile = GeneratedGrid[i];

		// Generate Mesh Grid
		if (bShowPreviewGrid && PreviewGridHISM)
		{
			const FVector TileLocation = FVector(
				CurrentTile.Row * CellSize, 
				CurrentTile.Column * CellSize,
				0
			);
			const FVector Scale = FVector(CellSize * 0.01);
			const FTransform T = FTransform(FRotator::ZeroRotator, TileLocation, Scale);
			PreviewGridHISM->AddInstance(T);
		}

		// Add Text Components
		if (bShowTileTextInfo)
		{
			UTextRenderComponent* Text = NewObject<UTextRenderComponent>(this);
			TextComponents.Add(Text);

			if (Text)
			{
				Text->RegisterComponent();

				Text->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
				Text->VerticalAlignment = EVerticalTextAligment::EVRTA_TextCenter;

				const FVector TileLocation = FVector(
					CurrentTile.Row * CellSize, 
					CurrentTile.Column * CellSize,
					1.0f
				);

				const FTransform T = FTransform(
					FRotator(90.0f, 0.0f, 90.0f), 
					TileLocation, 
					FVector::OneVector
				);

				Text->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
				Text->SetRelativeTransform(T);

				FFormatNamedArguments Args;
				Args.Add("x", CurrentTile.Row);
				Args.Add("y", CurrentTile.Column);
				Args.Add("id", i);

				FText ShowCoords = FText::Format(
					NSLOCTEXT("gridsys", "DebugTextCoords", "X:{x}, Y:{y}, \nID:{id}"), 
					Args
				);

				Text->SetText(ShowCoords);
			}
		}
	}

	PreviewGridHISM->bAutoRebuildTreeOnInstanceChanges = true;
	PreviewGridHISM->BuildTreeIfOutdated(true, true);

	UKismetSystemLibrary::FlushPersistentDebugLines(this);
	if (bDrawBoundingBox)
	{
		UKismetSystemLibrary::DrawDebugBox(
			this, 
			GetGridWorldOriginWorld(), 
			FVector(GetGridExtents(), 50.0),
			FLinearColor::Red,
			FRotator::ZeroRotator,
			3000.0f,
			2.0f
		);
	}
}

TArray<FGridCoord> AGridSystem::GenerateGrid() 
{
	GeneratedGrid.Empty();

	int32 xMin = 0;
	int32 xMax = GridDimensions.Row;

	int32 yMin = 0;
	int32 yMax = GridDimensions.Column;

	for(int i = xMin; i < xMax; i++)
	{
		for(int j = yMin; j < yMax; j++)
		{
			FGridCoord Coord(i, j);
			GeneratedGrid.Emplace(Coord);
		}
	}

	GenerateVisualGrid();
	return GeneratedGrid;
}

FVector AGridSystem::GetGridOriginRelative() 
{
	FVector Result = FVector::ZeroVector;

	const float CellHalfSize = CellSize * 0.5f;

	Result.X = ((GridDimensions.Row * 0.5f) * CellSize) - CellHalfSize;
	Result.Y = ((GridDimensions.Column * 0.5f) * CellSize) - CellHalfSize;

	return Result;
}

FVector AGridSystem::GetGridWorldOriginWorld() 
{
	return GetGridOriginRelative() + GetActorLocation();
}

FVector2D AGridSystem::GetGridSize() 
{
	return (GridDimensions * CellSize).ToVector2D();
}

FVector2D AGridSystem::GetGridExtents() 
{
	return GetGridSize() * 0.5f;
}

FVector AGridSystem::GetGridRelativeFromWorld(FVector WorldLocation) 
{
	return WorldLocation - GetActorLocation();
}

FVector AGridSystem::GetCellCenterFromRelative(FVector RelativeLocation, bool bReturnWorldSpace) 
{
	int32 ID;

	const FGridCoord Coord = GetCoordinateFromRelative(RelativeLocation, ID);

	FVector CellCenter = FVector::ZeroVector;

	CellCenter.X = Coord.Row * CellSize;
	CellCenter.Y = Coord.Column * CellSize;
	
	return bReturnWorldSpace ? CellCenter + GetActorLocation() : CellCenter;
}

bool AGridSystem::IsInGridBounds(FGridCoord Coordinate) 
{
	return (Coordinate >= FGridCoord(0, 0) && Coordinate < GridDimensions);
}

bool AGridSystem::IsClearTile(FGridCoord Coordinate) 
{
	return !BlockedTiles.Contains(Coordinate);
}

bool AGridSystem::IsValidLocation(FGridCoord Coordinate) 
{
	return IsInGridBounds(Coordinate) && IsClearTile(Coordinate);
}

FGridCoord AGridSystem::GetCoordinateFromRelative(FVector RelativeLocation, int32& CellID) 
{
	FGridCoord Coord;

	Coord.Column = FMath::RoundToInt(RelativeLocation.Y / CellSize);
	Coord.Row = FMath::RoundToInt(RelativeLocation.X / CellSize);

	CellID = GetCellIDFromCoordinate(Coord);

	return Coord;
}

FGridCoord AGridSystem::GetCoordinateFromCellID(int32 ID) 
{
	FGridCoord Coord;

	Coord.Column = ID / GridDimensions.Row;
	Coord.Row = ID % GridDimensions.Row;

	return Coord;	
}

int32 AGridSystem::GetCellIDFromCoordinate(FGridCoord Coordinate) 
{
	return (GridDimensions.Row * Coordinate.Column) + Coordinate.Row;
}

