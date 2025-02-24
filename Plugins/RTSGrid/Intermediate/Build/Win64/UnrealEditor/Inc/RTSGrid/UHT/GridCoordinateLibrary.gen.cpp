// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSGrid/Public/GridCoordinateLibrary.h"
#include "RTSGrid/Public/GridCoords.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridCoordinateLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RTSGRID_API UClass* Z_Construct_UClass_UGridCoordinateLibrary();
	RTSGRID_API UClass* Z_Construct_UClass_UGridCoordinateLibrary_NoRegister();
	RTSGRID_API UScriptStruct* Z_Construct_UScriptStruct_FGridCoord();
	UPackage* Z_Construct_UPackage__Script_RTSGrid();
// End Cross Module References
	DEFINE_FUNCTION(UGridCoordinateLibrary::execConv_GridCoordToVector2D)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UGridCoordinateLibrary::Conv_GridCoordToVector2D(Z_Param_A);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridCoordinateLibrary::execMultiplyCoordCoord)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_A);
		P_GET_STRUCT(FGridCoord,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGridCoord*)Z_Param__Result=UGridCoordinateLibrary::MultiplyCoordCoord(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridCoordinateLibrary::execMultiplyCoordInt)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_A);
		P_GET_PROPERTY(FIntProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGridCoord*)Z_Param__Result=UGridCoordinateLibrary::MultiplyCoordInt(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridCoordinateLibrary::execMultiplyCoordFloat)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_A);
		P_GET_PROPERTY(FFloatProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGridCoord*)Z_Param__Result=UGridCoordinateLibrary::MultiplyCoordFloat(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridCoordinateLibrary::execbEqualCoordCoord)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_A);
		P_GET_STRUCT(FGridCoord,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGridCoordinateLibrary::bEqualCoordCoord(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	void UGridCoordinateLibrary::StaticRegisterNativesUGridCoordinateLibrary()
	{
		UClass* Class = UGridCoordinateLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "bEqualCoordCoord", &UGridCoordinateLibrary::execbEqualCoordCoord },
			{ "Conv_GridCoordToVector2D", &UGridCoordinateLibrary::execConv_GridCoordToVector2D },
			{ "MultiplyCoordCoord", &UGridCoordinateLibrary::execMultiplyCoordCoord },
			{ "MultiplyCoordFloat", &UGridCoordinateLibrary::execMultiplyCoordFloat },
			{ "MultiplyCoordInt", &UGridCoordinateLibrary::execMultiplyCoordInt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics
	{
		struct GridCoordinateLibrary_eventbEqualCoordCoord_Parms
		{
			FGridCoord A;
			FGridCoord B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventbEqualCoordCoord_Parms, A), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventbEqualCoordCoord_Parms, B), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	void Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridCoordinateLibrary_eventbEqualCoordCoord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridCoordinateLibrary_eventbEqualCoordCoord_Parms), &Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (GridCroods)" },
		{ "Keywords", "equal =" },
		{ "ModuleRelativePath", "Public/GridCoordinateLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Return true if A is equal to B" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridCoordinateLibrary, nullptr, "bEqualCoordCoord", nullptr, nullptr, Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::GridCoordinateLibrary_eventbEqualCoordCoord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::GridCoordinateLibrary_eventbEqualCoordCoord_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics
	{
		struct GridCoordinateLibrary_eventConv_GridCoordToVector2D_Parms
		{
			FGridCoord A;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventConv_GridCoordToVector2D_Parms, A), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventConv_GridCoordToVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Grids" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "Convert (FVector2D)" },
		{ "Keywords", "Convert" },
		{ "ModuleRelativePath", "Public/GridCoordinateLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Convert To FVector2D" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridCoordinateLibrary, nullptr, "Conv_GridCoordToVector2D", nullptr, nullptr, Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::GridCoordinateLibrary_eventConv_GridCoordToVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::GridCoordinateLibrary_eventConv_GridCoordToVector2D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics
	{
		struct GridCoordinateLibrary_eventMultiplyCoordCoord_Parms
		{
			FGridCoord A;
			FGridCoord B;
			FGridCoord ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventMultiplyCoordCoord_Parms, A), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventMultiplyCoordCoord_Parms, B), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventMultiplyCoordCoord_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "Multiply (FVector2D)" },
		{ "Keywords", "multiply * times" },
		{ "ModuleRelativePath", "Public/GridCoordinateLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "A * B" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridCoordinateLibrary, nullptr, "MultiplyCoordCoord", nullptr, nullptr, Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::GridCoordinateLibrary_eventMultiplyCoordCoord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::GridCoordinateLibrary_eventMultiplyCoordCoord_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics
	{
		struct GridCoordinateLibrary_eventMultiplyCoordFloat_Parms
		{
			FGridCoord A;
			float B;
			FGridCoord ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventMultiplyCoordFloat_Parms, A), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventMultiplyCoordFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventMultiplyCoordFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "Multiply (float)" },
		{ "Keywords", "multiply * times" },
		{ "ModuleRelativePath", "Public/GridCoordinateLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "A * B" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridCoordinateLibrary, nullptr, "MultiplyCoordFloat", nullptr, nullptr, Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::GridCoordinateLibrary_eventMultiplyCoordFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::GridCoordinateLibrary_eventMultiplyCoordFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics
	{
		struct GridCoordinateLibrary_eventMultiplyCoordInt_Parms
		{
			FGridCoord A;
			int32 B;
			FGridCoord ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FIntPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventMultiplyCoordInt_Parms, A), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventMultiplyCoordInt_Parms, B), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCoordinateLibrary_eventMultiplyCoordInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 854754953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "Multiply (int)" },
		{ "Keywords", "multiply * times" },
		{ "ModuleRelativePath", "Public/GridCoordinateLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "A * B" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridCoordinateLibrary, nullptr, "MultiplyCoordInt", nullptr, nullptr, Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::GridCoordinateLibrary_eventMultiplyCoordInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::GridCoordinateLibrary_eventMultiplyCoordInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridCoordinateLibrary);
	UClass* Z_Construct_UClass_UGridCoordinateLibrary_NoRegister()
	{
		return UGridCoordinateLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGridCoordinateLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridCoordinateLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSGrid,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridCoordinateLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridCoordinateLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridCoordinateLibrary_bEqualCoordCoord, "bEqualCoordCoord" }, // 2679324139
		{ &Z_Construct_UFunction_UGridCoordinateLibrary_Conv_GridCoordToVector2D, "Conv_GridCoordToVector2D" }, // 3373760338
		{ &Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordCoord, "MultiplyCoordCoord" }, // 1120738722
		{ &Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordFloat, "MultiplyCoordFloat" }, // 3121895865
		{ &Z_Construct_UFunction_UGridCoordinateLibrary_MultiplyCoordInt, "MultiplyCoordInt" }, // 4221701386
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridCoordinateLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridCoordinateLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GridCoordinateLibrary.h" },
		{ "ModuleRelativePath", "Public/GridCoordinateLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridCoordinateLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridCoordinateLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridCoordinateLibrary_Statics::ClassParams = {
		&UGridCoordinateLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridCoordinateLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridCoordinateLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGridCoordinateLibrary()
	{
		if (!Z_Registration_Info_UClass_UGridCoordinateLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridCoordinateLibrary.OuterSingleton, Z_Construct_UClass_UGridCoordinateLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridCoordinateLibrary.OuterSingleton;
	}
	template<> RTSGRID_API UClass* StaticClass<UGridCoordinateLibrary>()
	{
		return UGridCoordinateLibrary::StaticClass();
	}
	UGridCoordinateLibrary::UGridCoordinateLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridCoordinateLibrary);
	UGridCoordinateLibrary::~UGridCoordinateLibrary() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridCoordinateLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridCoordinateLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridCoordinateLibrary, UGridCoordinateLibrary::StaticClass, TEXT("UGridCoordinateLibrary"), &Z_Registration_Info_UClass_UGridCoordinateLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridCoordinateLibrary), 1825490579U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridCoordinateLibrary_h_1402580065(TEXT("/Script/RTSGrid"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridCoordinateLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridCoordinateLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
