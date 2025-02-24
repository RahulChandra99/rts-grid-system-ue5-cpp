// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSGridSystem/Public/GridSystem.h"
#include "RTSGridSystem/Public/GridCoords.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	RTSGRIDSYSTEM_API UClass* Z_Construct_UClass_AGridSystem();
	RTSGRIDSYSTEM_API UClass* Z_Construct_UClass_AGridSystem_NoRegister();
	RTSGRIDSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FGridCoord();
	UPackage* Z_Construct_UPackage__Script_RTSGridSystem();
// End Cross Module References
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridSystem_eventGenerateGrid_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 532030403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridSystem_GenerateGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
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
		(UObject* (*)())Z_Construct_UPackage__Script_RTSGridSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGridSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridSystem_GenerateGrid, "GenerateGrid" }, // 895073646
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Grids" },
		{ "ClassGroupNames", "GridSystem" },
		{ "HideCategories", "Physics LOD" },
		{ "IncludePath", "GridSystem.h" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_RootComp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Grids" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSystem, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_RootComp_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_RootComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_PreviewGridHISM_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_GridDimensions = { "GridDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSystem, GridDimensions), Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_GridDimensions_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_GridDimensions_MetaData) }; // 532030403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_CellSize_MetaData[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSystem, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_CellSize_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_CellSize_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_BlockedTiles_ElementProp = { "BlockedTiles", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_BlockedTiles_MetaData[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	static_assert(TModels_V<CGetTypeHashable, FGridCoord>, "The structure 'FGridCoord' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_BlockedTiles = { "BlockedTiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSystem, BlockedTiles), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_BlockedTiles_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_BlockedTiles_MetaData) }; // 532030403
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_GeneratedGrid_Inner = { "GeneratedGrid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridCoord, METADATA_PARAMS(0, nullptr) }; // 532030403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_GeneratedGrid_MetaData[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGridSystem_Statics::NewProp_GeneratedGrid = { "GeneratedGrid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridSystem, GeneratedGrid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridSystem_Statics::NewProp_GeneratedGrid_MetaData), Z_Construct_UClass_AGridSystem_Statics::NewProp_GeneratedGrid_MetaData) }; // 532030403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridSystem_Statics::NewProp_bShowPreviewGrid_MetaData[] = {
		{ "Category", "Grids" },
		{ "ModuleRelativePath", "Public/GridSystem.h" },
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridSystem_Statics::NewProp_RootComp,
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
	template<> RTSGRIDSYSTEM_API UClass* StaticClass<AGridSystem>()
	{
		return AGridSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridSystem);
	AGridSystem::~AGridSystem() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_RTSMechanics_Plugins_RTSGridSystem_Source_RTSGridSystem_Public_GridSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_RTSMechanics_Plugins_RTSGridSystem_Source_RTSGridSystem_Public_GridSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridSystem, AGridSystem::StaticClass, TEXT("AGridSystem"), &Z_Registration_Info_UClass_AGridSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridSystem), 1905543735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_RTSMechanics_Plugins_RTSGridSystem_Source_RTSGridSystem_Public_GridSystem_h_2313154669(TEXT("/Script/RTSGridSystem"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_RTSMechanics_Plugins_RTSGridSystem_Source_RTSGridSystem_Public_GridSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_RTSMechanics_Plugins_RTSGridSystem_Source_RTSGridSystem_Public_GridSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
