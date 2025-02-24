// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridCoords.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GridCoordinateLibrary.generated.h"

/**
 * 
 */
UCLASS()
class RTSGRID_API UGridCoordinateLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintPure, Category="Grids", meta=(DisplayName="Equal (GridCroods)", CompactNodeTitle = "==", Keywords = "equal =", Tooltip = "Return true if A is equal to B"))
	static bool bEqualCoordCoord(FGridCoord A, FGridCoord B);

	UFUNCTION(BlueprintPure, Category="Grids", meta=(DisplayName="Multiply (float)", CompactNodeTitle = "*", Keywords = "multiply * times", Tooltip = "A * B"))
	static FGridCoord MultiplyCoordFloat(FGridCoord A, float B);

	UFUNCTION(BlueprintPure, Category="Grids", meta=(DisplayName="Multiply (int)", CompactNodeTitle = "*", Keywords = "multiply * times", Tooltip = "A * B"))
	static FGridCoord MultiplyCoordInt(FGridCoord A, int B);

	UFUNCTION(BlueprintPure, Category="Grids", meta=(DisplayName="Multiply (FVector2D)", CompactNodeTitle = "*", Keywords = "multiply * times", Tooltip = "A * B"))
	static FGridCoord MultiplyCoordCoord(FGridCoord A, FGridCoord B);

	UFUNCTION(BlueprintPure, Category="Grids", meta=(DisplayName="Convert (FVector2D)", CompactNodeTitle = "*", BlueprintAutocast, Keywords = "Convert", Tooltip = "Convert To FVector2D"))
	static FVector2D Conv_GridCoordToVector2D(FGridCoord A);

};
