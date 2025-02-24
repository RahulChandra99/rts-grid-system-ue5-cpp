// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSGrid/Public/GridSystem.h"
#include "RTSGrid/Public/GridCoords.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	RTSGRID_API UClass* Z_Construct_UClass_AGridSystem();
	RTSGRID_API UClass* Z_Construct_UClass_AGridSystem_NoRegister();
	RTSGRID_API UScriptStruct* Z_Construct_UScriptStruct_FGridCoord();
	UPackage* Z_Construct_UPackage__Script_RTSGrid();
// End Cross Module References
	DEFINE_FUNCTION(AGridSystem::execGetCellIDFromCoordinate)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_Coordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCellIDFromCoordinate(Z_Param_Coordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSystem::execGetCoordinateFromCellID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGridCoord*)Z_Param__Result=P_THIS->GetCoordinateFromCellID(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSystem::execGetCoordinateFromRelative)
	{
		P_GET_STRUCT(FVector,Z_Param_RelativeLocation);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CellID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGridCoord*)Z_Param__Result=P_THIS->GetCoordinateFromRelative(Z_Param_RelativeLocation,Z_Param_Out_CellID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSystem::execIsValidLocation)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_Coordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidLocation(Z_Param_Coordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSystem::execIsClearTile)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_Coordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsClearTile(Z_Param_Coordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSystem::execIsInGridBounds)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_Coordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInGridBounds(Z_Param_Coordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSystem::execGetCellCenterFromRelative)
	{
		P_GET_STRUCT(FVector,Z_Param_RelativeLocation);
		P_GET_UBOOL(Z_Param_bReturnWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCellCenterFromRelative(Z_Param_RelativeLocation,Z_Param_bReturnWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSystem::execGetGridRelativeFromWorld)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGridRelativeFromWorld(Z_Param_WorldLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSystem::execGetGridExtents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetGridExtents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSystem::execGetGridSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetGridSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSystem::execGetGridWorldOriginWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGridWorldOriginWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSystem::execGetGridOriginRelative)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGridOriginRelative();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGridSystem::execGenerateGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGridCoord>*)Z_Param__Result=P_THIS->GenerateGrid();
		P_NATIVE_END;
	}
	void AGridSystem::StaticRegisterNativesAGridSystem()
	{
		UClass* Class = AGridSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateGrid", &AGridSystem::execGenerateGrid },
			{ "GetCellCenterFromRelative", &AGridSystem::execGetCellCenterFromRelative },
			{ "GetCellIDFromCoordinate", &AGridSystem::execGetCellIDFromCoordinate },
			{ "GetCoordinateFromCellID", &AGridSystem::execGetCoordinateFromCellID },
			{ "GetCoordinateFromRelative", &AGridSystem::execGetCoordinateFromRelative },
			{ "GetGridExtents", &AGridSystem::execGetGridExtents },
			{ "GetGridOriginRelative", &AGridSystem::execGetGridOriginRelative },
			{ "GetGridRelativeFromWorld", &AGridSystem::execGetGridRelativeFromWorld },
			{ "GetGridSize", &AGridSystem::execGetGridSize },
			{ "GetGridWorldOriginWorld", &AGridSystem::execGetGridWorldOriginWorld },
			{ "IsClearTile", &AGridSystem::execIsClearTile },
			{ "IsInGridBounds", &AGridSystem::execIsInGridBounds },
			{ "IsValidLocation", &AGridSystem::execIsValidLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics
	{
		struct GridSystem_eventGenerateGrid_Parms
		{
			TArray<FGridCoord> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGenerateGrid_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Core Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "GenerateGrid", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::GridSystem_eventGenerateGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::GridSystem_eventGenerateGrid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_GenerateGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics
	{
		struct GridSystem_eventGetCellCenterFromRelative_Parms
		{
			FVector RelativeLocation;
			bool bReturnWorldSpace;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
		static void NewProp_bReturnWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnWorldSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetCellCenterFromRelative_Parms, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::NewProp_bReturnWorldSpace_SetBit(void* Obj)
	{
		((GridSystem_eventGetCellCenterFromRelative_Parms*)Obj)->bReturnWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::NewProp_bReturnWorldSpace = { "bReturnWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridSystem_eventGetCellCenterFromRelative_Parms), &Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::NewProp_bReturnWorldSpace_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetCellCenterFromRelative_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::NewProp_RelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::NewProp_bReturnWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "GetCellCenterFromRelative", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::GridSystem_eventGetCellCenterFromRelative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::GridSystem_eventGetCellCenterFromRelative_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics
	{
		struct GridSystem_eventGetCellIDFromCoordinate_Parms
		{
			FGridCoord Coordinate;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetCellIDFromCoordinate_Parms, Coordinate), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetCellIDFromCoordinate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "GetCellIDFromCoordinate", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::GridSystem_eventGetCellIDFromCoordinate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::GridSystem_eventGetCellIDFromCoordinate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics
	{
		struct GridSystem_eventGetCoordinateFromCellID_Parms
		{
			int32 ID;
			FGridCoord ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetCoordinateFromCellID_Parms, ID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetCoordinateFromCellID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "GetCoordinateFromCellID", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::GridSystem_eventGetCoordinateFromCellID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::GridSystem_eventGetCoordinateFromCellID_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics
	{
		struct GridSystem_eventGetCoordinateFromRelative_Parms
		{
			FVector RelativeLocation;
			int32 CellID;
			FGridCoord ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetCoordinateFromRelative_Parms, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::NewProp_CellID = { "CellID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetCoordinateFromRelative_Parms, CellID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetCoordinateFromRelative_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::NewProp_RelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::NewProp_CellID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "GetCoordinateFromRelative", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::GridSystem_eventGetCoordinateFromRelative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::GridSystem_eventGetCoordinateFromRelative_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics
	{
		struct GridSystem_eventGetGridExtents_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetGridExtents_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "GetGridExtents", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::GridSystem_eventGetGridExtents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::GridSystem_eventGetGridExtents_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_GetGridExtents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_GetGridExtents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics
	{
		struct GridSystem_eventGetGridOriginRelative_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetGridOriginRelative_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "GetGridOriginRelative", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::GridSystem_eventGetGridOriginRelative_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::GridSystem_eventGetGridOriginRelative_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_GetGridOriginRelative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_GetGridOriginRelative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics
	{
		struct GridSystem_eventGetGridRelativeFromWorld_Parms
		{
			FVector WorldLocation;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetGridRelativeFromWorld_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetGridRelativeFromWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "GetGridRelativeFromWorld", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::GridSystem_eventGetGridRelativeFromWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::GridSystem_eventGetGridRelativeFromWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSystem_GetGridSize_Statics
	{
		struct GridSystem_eventGetGridSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetGridSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "GetGridSize", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::GridSystem_eventGetGridSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::GridSystem_eventGetGridSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_GetGridSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_GetGridSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics
	{
		struct GridSystem_eventGetGridWorldOriginWorld_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGetGridWorldOriginWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "GetGridWorldOriginWorld", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::GridSystem_eventGetGridWorldOriginWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::GridSystem_eventGetGridWorldOriginWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSystem_IsClearTile_Statics
	{
		struct GridSystem_eventIsClearTile_Parms
		{
			FGridCoord Coordinate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventIsClearTile_Parms, Coordinate), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	void Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridSystem_eventIsClearTile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridSystem_eventIsClearTile_Parms), &Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "IsClearTile", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::GridSystem_eventIsClearTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::GridSystem_eventIsClearTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_IsClearTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_IsClearTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics
	{
		struct GridSystem_eventIsInGridBounds_Parms
		{
			FGridCoord Coordinate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventIsInGridBounds_Parms, Coordinate), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	void Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridSystem_eventIsInGridBounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridSystem_eventIsInGridBounds_Parms), &Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "IsInGridBounds", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::GridSystem_eventIsInGridBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::GridSystem_eventIsInGridBounds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_IsInGridBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_IsInGridBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics
	{
		struct GridSystem_eventIsValidLocation_Parms
		{
			FGridCoord Coordinate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventIsValidLocation_Parms, Coordinate), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	void Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridSystem_eventIsValidLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridSystem_eventIsValidLocation_Parms), &Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridSystem, nullptr, "IsValidLocation", nullptr, nullptr, Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::GridSystem_eventIsValidLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::GridSystem_eventIsValidLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGridSystem_IsValidLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridSystem_IsValidLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridSystem);
	UClass* Z_Construct_UClass_AGridSystem_NoRegister()
	{
		return AGridSystem::StaticClass();
	}
	struct Z_Construct_UClass_AGridSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSystemRootComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSystemRootComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGridHISM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewGridHISM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridDimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedTiles_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockedTiles_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_BlockedTiles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedGrid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedGrid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreviewGrid_MetaData[];
#endif
		static void NewProp_bShowPreviewGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreviewGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTileTextInfo_MetaData[];
#endif
		static void NewProp_bShowTileTextInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTileTextInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawBoundingBox_MetaData[];
#endif
		static void NewProp_bDrawBoundingBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawBoundingBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSGrid,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGridSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridSystem_GenerateGrid, "GenerateGrid" }, // 1929697784
		{ &Z_Construct_UFunction_AGridSystem_GetCellCenterFromRelative, "GetCellCenterFromRelative" }, // 978253231
		{ &Z_Construct_UFunction_AGridSystem_GetCellIDFromCoordinate, "GetCellIDFromCoordinate" }, // 3379519783
		{ &Z_Construct_UFunction_AGridSystem_GetCoordinateFromCellID, "GetCoordinateFromCellID" }, // 491480767
		{ &Z_Construct_UFunction_AGridSystem_GetCoordinateFromRelative, "GetCoordinateFromRelative" }, // 663268944
		{ &Z_Construct_UFunction_AGridSystem_GetGridExtents, "GetGridExtents" }, // 2584351923
		{ &Z_Construct_UFunction_AGridSystem_GetGridOriginRelative, "GetGridOriginRelative" }, // 4082092290
		{ &Z_Construct_UFunction_AGridSystem_GetGridRelativeFromWorld, "GetGridRelativeFromWorld" }, // 4044963774
		{ &Z_Construct_UFunction_AGridSystem_GetGridSize, "GetGridSize" }, // 1103412151
		{ &Z_Construct_UFunction_AGridSystem_GetGridWorldOriginWorld, "GetGridWorldOriginWorld" }, // 3720882164
		{ &Z_Construct_UFunction_AGridSystem_IsClearTile, "IsClearTile" }, // 2469847721
		{ &Z_Construct_UFunction_AGridSystem_IsInGridBounds, "IsInGridBounds" }, // 2061141485
		{ &Z_Construct_UFunction_AGridSystem_IsValidLocation, "IsValidLocation" }, // 3557998776
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Grids" },
		{ "ClassGroupNames", "GridSystem" },
		{ "HideCategories", "Physics LOD Replication Cooking Activation" },
		{ "IncludePath", "GridSystem.h" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_GridSystemRootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grids" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_GridSystemRootComponent = { "GridSystemRootComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSystem, GridSystemRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_GridSystemRootComponent_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_GridSystemRootComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_PreviewGridHISM_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grids" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_PreviewGridHISM = { "PreviewGridHISM", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSystem, PreviewGridHISM), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_PreviewGridHISM_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_PreviewGridHISM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_GridDimensions_MetaData[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_GridDimensions = { "GridDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSystem, GridDimensions), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_GridDimensions_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_GridDimensions_MetaData) }; // 854754953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_CellSize_MetaData[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSystem, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_CellSize_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_CellSize_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_BlockedTiles_ElementProp = { "BlockedTiles", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_BlockedTiles_MetaData[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FGridCoord>, "The structure 'FGridCoord' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_BlockedTiles = { "BlockedTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSystem, BlockedTiles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_BlockedTiles_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_BlockedTiles_MetaData) }; // 854754953
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_GeneratedGrid_Inner = { "GeneratedGrid", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_GeneratedGrid_MetaData[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_GeneratedGrid = { "GeneratedGrid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSystem, GeneratedGrid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_GeneratedGrid_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_GeneratedGrid_MetaData) }; // 854754953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowPreviewGrid_MetaData[] = {
		{ "Category", "Grids" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dev Options\n" },
#endif
		{ "ModuleRelativePath", "Public/GridSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dev Options" },
#endif
	};
#endif
	void Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowPreviewGrid_SetBit(void* Obj)
	{
		((AGridSystem*)Obj)->bShowPreviewGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowPreviewGrid = { "bShowPreviewGrid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridSystem), &Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowPreviewGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowPreviewGrid_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowPreviewGrid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowTileTextInfo_MetaData[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	void Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowTileTextInfo_SetBit(void* Obj)
	{
		((AGridSystem*)Obj)->bShowTileTextInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowTileTextInfo = { "bShowTileTextInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridSystem), &Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowTileTextInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowTileTextInfo_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowTileTextInfo_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_bDrawBoundingBox_MetaData[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	void Z_Construct_UClass_AGridSystem_Statics::NewProp_bDrawBoundingBox_SetBit(void* Obj)
	{
		((AGridSystem*)Obj)->bDrawBoundingBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_bDrawBoundingBox = { "bDrawBoundingBox", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridSystem), &Z_Construct_UClass_AGridSystem_Statics::NewProp_bDrawBoundingBox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_bDrawBoundingBox_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_bDrawBoundingBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSystem_Statics::NewProp_GridSystemRootComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSystem_Statics::NewProp_PreviewGridHISM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSystem_Statics::NewProp_GridDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSystem_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSystem_Statics::NewProp_BlockedTiles_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSystem_Statics::NewProp_BlockedTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSystem_Statics::NewProp_GeneratedGrid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSystem_Statics::NewProp_GeneratedGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowPreviewGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowTileTextInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSystem_Statics::NewProp_bDrawBoundingBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridSystem_Statics::ClassParams = {
		&AGridSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGridSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::PropPointers),
		0,
		0x009020A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGridSystem()
	{
		if (!Z_Registration_Info_UClass_AGridSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridSystem.OuterSingleton, Z_Construct_UClass_AGridSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridSystem.OuterSingleton;
	}
	template<> RTSGRID_API UClass* StaticClass<AGridSystem>()
	{
		return AGridSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridSystem);
	AGridSystem::~AGridSystem() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridSystem, AGridSystem::StaticClass, TEXT("AGridSystem"), &Z_Registration_Info_UClass_AGridSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridSystem), 955663618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_3129593009(TEXT("/Script/RTSGrid"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
