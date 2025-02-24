// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSGrid/Public/BuildingBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RTSGRID_API UClass* Z_Construct_UClass_ABuildingBase();
	RTSGRID_API UClass* Z_Construct_UClass_ABuildingBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RTSGrid();
// End Cross Module References
	static FName NAME_ABuildingBase_OnPlacementBegin = FName(TEXT("OnPlacementBegin"));
	void ABuildingBase::OnPlacementBegin()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABuildingBase_OnPlacementBegin),NULL);
	}
	static FName NAME_ABuildingBase_OnPlacementCancelled = FName(TEXT("OnPlacementCancelled"));
	void ABuildingBase::OnPlacementCancelled()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABuildingBase_OnPlacementCancelled),NULL);
	}
	static FName NAME_ABuildingBase_OnPlacementCompleted = FName(TEXT("OnPlacementCompleted"));
	void ABuildingBase::OnPlacementCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABuildingBase_OnPlacementCompleted),NULL);
	}
	void ABuildingBase::StaticRegisterNativesABuildingBase()
	{
	}
	struct Z_Construct_UFunction_ABuildingBase_OnPlacementBegin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingBase_OnPlacementBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placeable" },
		{ "ModuleRelativePath", "Public/BuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingBase_OnPlacementBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingBase, nullptr, "OnPlacementBegin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingBase_OnPlacementBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuildingBase_OnPlacementBegin_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABuildingBase_OnPlacementBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingBase_OnPlacementBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingBase_OnPlacementCancelled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingBase_OnPlacementCancelled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placeable" },
		{ "ModuleRelativePath", "Public/BuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingBase_OnPlacementCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingBase, nullptr, "OnPlacementCancelled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingBase_OnPlacementCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuildingBase_OnPlacementCancelled_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABuildingBase_OnPlacementCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingBase_OnPlacementCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingBase_OnPlacementCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingBase_OnPlacementCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Placeable" },
		{ "ModuleRelativePath", "Public/BuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingBase_OnPlacementCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingBase, nullptr, "OnPlacementCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingBase_OnPlacementCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABuildingBase_OnPlacementCompleted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABuildingBase_OnPlacementCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingBase_OnPlacementCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuildingBase);
	UClass* Z_Construct_UClass_ABuildingBase_NoRegister()
	{
		return ABuildingBase::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstructionProxy_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConstructionProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacementProxy_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PlacementProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildDurationMultiply_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuildDurationMultiply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSGrid,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuildingBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuildingBase_OnPlacementBegin, "OnPlacementBegin" }, // 275217843
		{ &Z_Construct_UFunction_ABuildingBase_OnPlacementCancelled, "OnPlacementCancelled" }, // 4089876785
		{ &Z_Construct_UFunction_ABuildingBase_OnPlacementCompleted, "OnPlacementCompleted" }, // 3281286647
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BuildingBase.h" },
		{ "ModuleRelativePath", "Public/BuildingBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingBase_Statics::NewProp_ConstructionProxy_MetaData[] = {
		{ "Category", "Placeable" },
		{ "ModuleRelativePath", "Public/BuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABuildingBase_Statics::NewProp_ConstructionProxy = { "ConstructionProxy", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuildingBase, ConstructionProxy), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingBase_Statics::NewProp_ConstructionProxy_MetaData), Z_Construct_UClass_ABuildingBase_Statics::NewProp_ConstructionProxy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingBase_Statics::NewProp_PlacementProxy_MetaData[] = {
		{ "Category", "Placeable" },
		{ "ModuleRelativePath", "Public/BuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABuildingBase_Statics::NewProp_PlacementProxy = { "PlacementProxy", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuildingBase, PlacementProxy), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingBase_Statics::NewProp_PlacementProxy_MetaData), Z_Construct_UClass_ABuildingBase_Statics::NewProp_PlacementProxy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingBase_Statics::NewProp_BuildDuration_MetaData[] = {
		{ "Category", "Placeable" },
		{ "ModuleRelativePath", "Public/BuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildingBase_Statics::NewProp_BuildDuration = { "BuildDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuildingBase, BuildDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingBase_Statics::NewProp_BuildDuration_MetaData), Z_Construct_UClass_ABuildingBase_Statics::NewProp_BuildDuration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingBase_Statics::NewProp_BuildDurationMultiply_MetaData[] = {
		{ "Category", "Placeable" },
		{ "ModuleRelativePath", "Public/BuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildingBase_Statics::NewProp_BuildDurationMultiply = { "BuildDurationMultiply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuildingBase, BuildDurationMultiply), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingBase_Statics::NewProp_BuildDurationMultiply_MetaData), Z_Construct_UClass_ABuildingBase_Statics::NewProp_BuildDurationMultiply_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingBase_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Placeable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingBase_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuildingBase, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingBase_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_ABuildingBase_Statics::NewProp_StaticMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingBase_Statics::NewProp_ConstructionProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingBase_Statics::NewProp_PlacementProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingBase_Statics::NewProp_BuildDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingBase_Statics::NewProp_BuildDurationMultiply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingBase_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildingBase_Statics::ClassParams = {
		&ABuildingBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuildingBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuildingBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABuildingBase()
	{
		if (!Z_Registration_Info_UClass_ABuildingBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildingBase.OuterSingleton, Z_Construct_UClass_ABuildingBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuildingBase.OuterSingleton;
	}
	template<> RTSGRID_API UClass* StaticClass<ABuildingBase>()
	{
		return ABuildingBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingBase);
	ABuildingBase::~ABuildingBase() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_BuildingBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_BuildingBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuildingBase, ABuildingBase::StaticClass, TEXT("ABuildingBase"), &Z_Registration_Info_UClass_ABuildingBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildingBase), 1368849008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_BuildingBase_h_1954546787(TEXT("/Script/RTSGrid"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_BuildingBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_BuildingBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
