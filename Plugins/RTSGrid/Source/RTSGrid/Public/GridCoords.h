// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridCoords.generated.h"

USTRUCT(BlueprintType)
struct FGridCoord
{
	GENERATED_BODY()

	// Grid Location Column, or Y component
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Grids")
	int32 Column;

	// Grid Location Row, or X component
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Grids")
	int32 Row;

	// Default Constructor (no initialization).
	FORCEINLINE FGridCoord();

	/**
 	* Constructor using initial values for each component
	* 
	* @param InColRow XY Coordinate.
	*/
	FORCEINLINE FGridCoord(int32 InColumnRow);

	/**
 	* Constructor using initial values for each component
	* 
	* @param InColumn Y Coordinate.
	* @param InRow X Coordinate.
	*/
	FORCEINLINE FGridCoord(int32 InColumn, int32 InRow);

	/**
 	* Constructor using initial values mapped for each component
	* from a FVector2D
	*
	* @param InCoord XY Coordinate.
	*/
	FORCEINLINE FGridCoord(FVector2D InCoord);

	/** 
	 * Compares two FGridCoords.
 	 * 
	 * @param V the FGridCoord object to compare
	 * @return true if Column and Row values are the same
	*/
	FORCEINLINE bool operator==(const FGridCoord& V) const;

	/** 
	 * Compares two FGridCoords.
 	 * 
	 * @param V the FGridCoord object to compare
	 * @return true if Column and Row values are the less than V values
	*/
	FORCEINLINE bool operator<(const FGridCoord& V) const;

	/** 
	 * Compares two FGridCoords.
 	 * 
	 * @param V the FGridCoord object to compare
	 * @return true if Column and Row values are the greater than V values
	*/
	FORCEINLINE bool operator>(const FGridCoord& V) const;

	/** 
	 * Compares two FGridCoords.
 	 * 
	 * @param V the FGridCoord object to compare
	 * @return true if Column and Row values are the less or equal V values
	*/
	FORCEINLINE bool operator<=(const FGridCoord& V) const;

	/** 
	 * Compares two FGridCoords.
 	 * 
	 * @param V the FGridCoord object to compare
	 * @return true if Column and Row values are the grater or equal V values
	*/
	FORCEINLINE bool operator>=(const FGridCoord& V) const;

	/** Compares two FGridCoords.
 	* 
	* @param V the FGridCoord object to compare 
	* @return true if Column or Row values are different 
	*/
	FORCEINLINE bool operator!=(const FGridCoord& V) const;

	/** 
	 * Sums Two FGridCoord objects.
 	 * 
	 * @param V the FGridCoord object to sum 
	 * @return FGridCoord with Column and Row Summed up 
	*/
	FORCEINLINE FGridCoord operator+(FGridCoord& V) const;
	
	/** 
	 * Sums a FGridCoord object with a int.
 	 * 
	 * @param InI the int32 value to sum 
	 * @return FGridCoord with Column and Row Summed up with the Int 
	*/
	FORCEINLINE FGridCoord operator+(const int32 InI) const;
	
	/** 
	 * Sums a FGridCoord object with a float.
 	 * 
	 * @param InF the float value to sum 
	 * @return GridCoord with Column and Row Summed up with the float 
	*/
	FORCEINLINE FGridCoord operator+(const float InF) const;
	
	/** 
	 * Sums a FGridCoord object with a FVector2D
 	 * 
	 * @param InV the FVector2D value to sum 
	 * @return  new FGridCoord with Column summed up with InV.Y and Row summed up with InV.X
	*/
	FORCEINLINE FGridCoord operator+(const FVector2D& InV) const;

	/** 
	 * Subtracts Two FGridCoord objects 
 	 * 
	 * @param V the FGridCoord object to subtract 
	 * @return new FGridCoord with Column and Row subtracted 
	*/
	FORCEINLINE FGridCoord operator-(FGridCoord& V) const;
	
	/** 
	 * Subtracts a FGridCoord object with a int. 
 	 * 
	 * @param InI the int32 value to sum 
	 * @return FGridCoord with Column and Row subtracted by the Int 
	*/
	FORCEINLINE FGridCoord operator-(const int32 InI) const;
	
	/** 
	 * Subtracts a FGridCoord object with a float.
 	 * 
	 * @param InF the float value to subtract 
	 * @return FGridCoord with Column and Row subtracted of the float
	*/
	FORCEINLINE FGridCoord operator-(const float InF) const;
	
	/** 
	 * Subtracts a FGridCoord object with a FVector2D.
 	 * 
	 * @param InV the FVector2D value to subtract 
	 * @return GridCoord with Column subtracted of InV.Y and Row subtracted of InV.X
	*/
	FORCEINLINE FGridCoord operator-(const FVector2D& InV) const;

	/**
	 * Scales a FGridCoord by a float value
	 *
	 * @param Scale the float value to scale
	 * @return FGridCoord with Column and Row Scaled by Scale
	*/
	FORCEINLINE FGridCoord operator*(float Scale) const;

	/**
	 * Scales a FGridCoord by an int value
	 *
	 * @param Scale the int value to scale
	 * @return FGridCoord with Column and Row Scaled by Scale
	*/
	FORCEINLINE FGridCoord operator*(int Scale) const;

	/**
	 * Scales a FGridCoord by an FGridCoord struct
	 *
	 * @param Scale the FGridCoord value to scale
	 * @return FGridCoord with Column and Row Scaled by Scale
	*/
	FORCEINLINE FGridCoord operator*(const FGridCoord& V) const;


	/**
	 * Divides a FGridCoord by a float value
	 *
	 * @param Scale the float value to divide
	 * @return FGridCoord with Column and Row divided by Scale
	*/
	FORCEINLINE FGridCoord operator/(float Scale) const;

	/**
	 * Divides a FGridCoord by an int value
	 *
	 * @param Scale the int value to divide
	 * @return FGridCoord with Column and Row divided by Scale
	*/
	FORCEINLINE FGridCoord operator/(int Scale) const;

	/**
	 * Converts a FGridCoord to a FVector2D
	 * 
	 * @return FVector2D with X value as Row and Y as Column values
	*/
	FORCEINLINE FVector2D ToVector2D() const;
};

FORCEINLINE FGridCoord::FGridCoord()
	: Column(0)
	, Row(0)
{}

FORCEINLINE FGridCoord::FGridCoord(int32 InColumnRow)
	: Column(InColumnRow)
	, Row(InColumnRow)
{}

FORCEINLINE FGridCoord::FGridCoord(int32 InColumn, int32 InRow)
	: Column(InColumn)
	, Row(InRow)
{}

FORCEINLINE FGridCoord::FGridCoord(FVector2D InCoord)
	: Column(InCoord.Y)
	, Row(InCoord.X)
{}

FORCEINLINE bool FGridCoord::operator==(const FGridCoord& V) const
{
	return Column == V.Column && Row == V.Row;
}

FORCEINLINE bool FGridCoord::operator<(const FGridCoord& V) const
{
	return Column < V.Column && Row < V.Row;
}

FORCEINLINE bool FGridCoord::operator>(const FGridCoord& V) const
{
	return Column > V.Column && Row > V.Row;
}

FORCEINLINE bool FGridCoord::operator<=(const FGridCoord& V) const
{
	return Column <= V.Column && Row <= V.Row;
}

FORCEINLINE bool FGridCoord::operator>=(const FGridCoord& V) const
{
	return Column >= V.Column && Row >= V.Row;
}

FORCEINLINE bool FGridCoord::operator!=(const FGridCoord& V) const
{
	return Column != V.Column || Row != V.Row;
}

FORCEINLINE FGridCoord FGridCoord::operator-(FGridCoord& V) const
{
	return FGridCoord(Column - V.Column, Row - V.Row);
}

FORCEINLINE FGridCoord FGridCoord::operator-(const int32 InI) const
{
	return FGridCoord(Column - InI, Row - InI);
}

FORCEINLINE FGridCoord FGridCoord::operator-(const float InF) const
{
	return FGridCoord(Column - InF, Row - InF);
}

FORCEINLINE FGridCoord FGridCoord::operator/(float Scale) const
{
	return FGridCoord(Column/Scale, Row/Scale);
}

FORCEINLINE FGridCoord FGridCoord::operator/(int Scale) const
{
	return FGridCoord(Column/Scale, Row/Scale);
}


FORCEINLINE FGridCoord FGridCoord::operator+(const FVector2D& InV) const
{
	return FGridCoord(Column + InV.Y, Row + InV.X);
	
}

FORCEINLINE FGridCoord FGridCoord::operator+(const float InF) const
{
	return FGridCoord(Column + InF, Row + InF);
}

FORCEINLINE FGridCoord FGridCoord::operator+(const int32 InI) const
{
	return FGridCoord(Column + InI, Row + InI);
}

FORCEINLINE FGridCoord FGridCoord::operator+(FGridCoord& V) const
{
	return FGridCoord(Column + V.Column, Row + V.Row);
}

FORCEINLINE FGridCoord FGridCoord::operator*(const FGridCoord& V) const
{
	return FGridCoord(Column * V.Column, Row * V.Row);
}

FORCEINLINE FGridCoord FGridCoord::operator*(int Scale) const
{
	return FGridCoord(Column * Scale, Row * Scale);
}

FORCEINLINE FGridCoord FGridCoord::operator*(float Scale) const
{
	return FGridCoord(Column * Scale, Row * Scale);
}

FORCEINLINE FVector2D FGridCoord::ToVector2D() const
{
	return FVector2D(Row, Column);
}

FORCEINLINE uint32 GetTypeHash(const FGridCoord& V)
{
	return FCrc::MemCrc32(&V, sizeof(FGridCoord));
}
