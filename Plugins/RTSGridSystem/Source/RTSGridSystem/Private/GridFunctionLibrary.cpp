#include "GridFunctionLibrary.h"

bool UGridFunctionLibrary::bEqualCoordCoord(FGridCoord A, FGridCoord B) 
{
	return A == B;
}

FGridCoord UGridFunctionLibrary::MultiplyCoordFloat(FGridCoord A, float B) 
{
	return FGridCoord(A.Column * B, A.Row * B);
}

FGridCoord UGridFunctionLibrary::MultiplyCoordInt(FGridCoord A, int B) 
{
	return FGridCoord(A.Column * B, A.Row * B);
}

FGridCoord UGridFunctionLibrary::MultiplyCoordCoord(FGridCoord A, FGridCoord B) 
{
	return FGridCoord(A.Column * B.Column, A.Row * B.Row);
}

FVector2D UGridFunctionLibrary::Conv_GridCoordToVector2D(FGridCoord A) 
{
	return FVector2D(A.Row, A.Column);
}