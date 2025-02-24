// Fill out your copyright notice in the Description page of Project Settings.


#include "GridCoordinateLibrary.h"

bool UGridCoordinateLibrary::bEqualCoordCoord(FGridCoord A, FGridCoord B) 
{
	return A == B;
}

FGridCoord UGridCoordinateLibrary::MultiplyCoordFloat(FGridCoord A, float B) 
{
	return FGridCoord(A.Column * B, A.Row * B);
}

FGridCoord UGridCoordinateLibrary::MultiplyCoordInt(FGridCoord A, int B) 
{
	return FGridCoord(A.Column * B, A.Row * B);
}

FGridCoord UGridCoordinateLibrary::MultiplyCoordCoord(FGridCoord A, FGridCoord B) 
{
	return FGridCoord(A.Column * B.Column, A.Row * B.Row);
}

FVector2D UGridCoordinateLibrary::Conv_GridCoordToVector2D(FGridCoord A) 
{
	return FVector2D(A.Row, A.Column);
}