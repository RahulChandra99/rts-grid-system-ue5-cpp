// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeStrategy/Public/TopDownPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	REALTIMESTRATEGY_API UClass* Z_Construct_UClass_ATopDownPlayerController();
	REALTIMESTRATEGY_API UClass* Z_Construct_UClass_ATopDownPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RealTimeStrategy();
// End Cross Module References
	void ATopDownPlayerController::StaticRegisterNativesATopDownPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownPlayerController);
	UClass* Z_Construct_UClass_ATopDownPlayerController_NoRegister()
	{
		return ATopDownPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeStrategy,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TopDownPlayerController.h" },
		{ "ModuleRelativePath", "Public/TopDownPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TopDownPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_SelectAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/TopDownPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_SelectAction = { "SelectAction", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownPlayerController, SelectAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_SelectAction_MetaData), Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_SelectAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_SelectedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/TopDownPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopDownPlayerController, SelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_SelectedActor_MetaData), Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_SelectedActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopDownPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_SelectAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopDownPlayerController_Statics::NewProp_SelectedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownPlayerController_Statics::ClassParams = {
		&ATopDownPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATopDownPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopDownPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATopDownPlayerController()
	{
		if (!Z_Registration_Info_UClass_ATopDownPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownPlayerController.OuterSingleton, Z_Construct_UClass_ATopDownPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownPlayerController.OuterSingleton;
	}
	template<> REALTIMESTRATEGY_API UClass* StaticClass<ATopDownPlayerController>()
	{
		return ATopDownPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownPlayerController);
	ATopDownPlayerController::~ATopDownPlayerController() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_TopDownPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_TopDownPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownPlayerController, ATopDownPlayerController::StaticClass, TEXT("ATopDownPlayerController"), &Z_Registration_Info_UClass_ATopDownPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownPlayerController), 3159237851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_TopDownPlayerController_h_199086815(TEXT("/Script/RealTimeStrategy"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_TopDownPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_TopDownPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
