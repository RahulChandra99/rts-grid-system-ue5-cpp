// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSGridSystem/Public/GridFunctionLibrary.h"
#include "RTSGridSystem/Public/GridCoords.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RTSGRIDSYSTEM_API UClass* Z_Construct_UClass_UGridFunctionLibrary();
	RTSGRIDSYSTEM_API UClass* Z_Construct_UClass_UGridFunctionLibrary_NoRegister();
	RTSGRIDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGridCoord();
	UPackage* Z_Construct_UPackage__Script_RTSGridSystem();
// End Cross Module References
	DEFINE_FUNCTION(UGridFunctionLibrary::execConv_GridCoordToVector2D)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_A);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UGridFunctionLibrary::Conv_GridCoordToVector2D(Z_Param_A);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFunctionLibrary::execMultiplyCoordCoord)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_A);
		P_GET_STRUCT(FGridCoord,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGridCoord*)Z_Param__Result=UGridFunctionLibrary::MultiplyCoordCoord(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFunctionLibrary::execMultiplyCoordInt)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_A);
		P_GET_PROPERTY(FIntProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGridCoord*)Z_Param__Result=UGridFunctionLibrary::MultiplyCoordInt(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFunctionLibrary::execMultiplyCoordFloat)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_A);
		P_GET_PROPERTY(FFloatProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGridCoord*)Z_Param__Result=UGridFunctionLibrary::MultiplyCoordFloat(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridFunctionLibrary::execbEqualCoordCoord)
	{
		P_GET_STRUCT(FGridCoord,Z_Param_A);
		P_GET_STRUCT(FGridCoord,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGridFunctionLibrary::bEqualCoordCoord(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	void UGridFunctionLibrary::StaticRegisterNativesUGridFunctionLibrary()
	{
		UClass* Class = UGridFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "bEqualCoordCoord", &UGridFunctionLibrary::execbEqualCoordCoord },
			{ "Conv_GridCoordToVector2D", &UGridFunctionLibrary::execConv_GridCoordToVector2D },
			{ "MultiplyCoordCoord", &UGridFunctionLibrary::execMultiplyCoordCoord },
			{ "MultiplyCoordFloat", &UGridFunctionLibrary::execMultiplyCoordFloat },
			{ "MultiplyCoordInt", &UGridFunctionLibrary::execMultiplyCoordInt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics
	{
		struct GridFunctionLibrary_eventbEqualCoordCoord_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventbEqualCoordCoord_Parms, A), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventbEqualCoordCoord_Parms, B), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
	void Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GridFunctionLibrary_eventbEqualCoordCoord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridFunctionLibrary_eventbEqualCoordCoord_Parms), &Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (GridCroods)" },
		{ "Keywords", "equal =" },
		{ "ModuleRelativePath", "Public/GridFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Return true if A is equal to B" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFunctionLibrary, nullptr, "bEqualCoordCoord", nullptr, nullptr, Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::GridFunctionLibrary_eventbEqualCoordCoord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::GridFunctionLibrary_eventbEqualCoordCoord_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics
	{
		struct GridFunctionLibrary_eventConv_GridCoordToVector2D_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventConv_GridCoordToVector2D_Parms, A), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventConv_GridCoordToVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Grids" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "Convert (FVector2D)" },
		{ "Keywords", "Convert" },
		{ "ModuleRelativePath", "Public/GridFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Convert To FVector2D" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFunctionLibrary, nullptr, "Conv_GridCoordToVector2D", nullptr, nullptr, Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::GridFunctionLibrary_eventConv_GridCoordToVector2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::GridFunctionLibrary_eventConv_GridCoordToVector2D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics
	{
		struct GridFunctionLibrary_eventMultiplyCoordCoord_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventMultiplyCoordCoord_Parms, A), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventMultiplyCoordCoord_Parms, B), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventMultiplyCoordCoord_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "Multiply (FVector2D)" },
		{ "Keywords", "multiply * times" },
		{ "ModuleRelativePath", "Public/GridFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "A * B" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFunctionLibrary, nullptr, "MultiplyCoordCoord", nullptr, nullptr, Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::GridFunctionLibrary_eventMultiplyCoordCoord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::GridFunctionLibrary_eventMultiplyCoordCoord_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics
	{
		struct GridFunctionLibrary_eventMultiplyCoordFloat_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventMultiplyCoordFloat_Parms, A), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventMultiplyCoordFloat_Parms, B), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventMultiplyCoordFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "Multiply (float)" },
		{ "Keywords", "multiply * times" },
		{ "ModuleRelativePath", "Public/GridFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "A * B" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFunctionLibrary, nullptr, "MultiplyCoordFloat", nullptr, nullptr, Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::GridFunctionLibrary_eventMultiplyCoordFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::GridFunctionLibrary_eventMultiplyCoordFloat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics
	{
		struct GridFunctionLibrary_eventMultiplyCoordInt_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventMultiplyCoordInt_Parms, A), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventMultiplyCoordInt_Parms, B), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridFunctionLibrary_eventMultiplyCoordInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "CompactNodeTitle", "*" },
		{ "DisplayName", "Multiply (int)" },
		{ "Keywords", "multiply * times" },
		{ "ModuleRelativePath", "Public/GridFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "A * B" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridFunctionLibrary, nullptr, "MultiplyCoordInt", nullptr, nullptr, Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::GridFunctionLibrary_eventMultiplyCoordInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::GridFunctionLibrary_eventMultiplyCoordInt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFunctionLibrary);
	UClass* Z_Construct_UClass_UGridFunctionLibrary_NoRegister()
	{
		return UGridFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGridFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSGridSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridFunctionLibrary_bEqualCoordCoord, "bEqualCoordCoord" }, // 23338965
		{ &Z_Construct_UFunction_UGridFunctionLibrary_Conv_GridCoordToVector2D, "Conv_GridCoordToVector2D" }, // 2656488624
		{ &Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordCoord, "MultiplyCoordCoord" }, // 2547565019
		{ &Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordFloat, "MultiplyCoordFloat" }, // 1661488286
		{ &Z_Construct_UFunction_UGridFunctionLibrary_MultiplyCoordInt, "MultiplyCoordInt" }, // 2451619107
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GridFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GridFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFunctionLibrary_Statics::ClassParams = {
		&UGridFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGridFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGridFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGridFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridFunctionLibrary.OuterSingleton;
	}
	template<> RTSGRIDSYSTEM_API UClass* StaticClass<UGridFunctionLibrary>()
	{
		return UGridFunctionLibrary::StaticClass();
	}
	UGridFunctionLibrary::UGridFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFunctionLibrary);
	UGridFunctionLibrary::~UGridFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_RTSMechanics_Plugins_RTSGridSystem_Source_RTSGridSystem_Public_GridFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_RTSMechanics_Plugins_RTSGridSystem_Source_RTSGridSystem_Public_GridFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridFunctionLibrary, UGridFunctionLibrary::StaticClass, TEXT("UGridFunctionLibrary"), &Z_Registration_Info_UClass_UGridFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFunctionLibrary), 1065770633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_RTSMechanics_Plugins_RTSGridSystem_Source_RTSGridSystem_Public_GridFunctionLibrary_h_1778186650(TEXT("/Script/RTSGridSystem"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_RTSMechanics_Plugins_RTSGridSystem_Source_RTSGridSystem_Public_GridFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_RTSMechanics_Plugins_RTSGridSystem_Source_RTSGridSystem_Public_GridFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
