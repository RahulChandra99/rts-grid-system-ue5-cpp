// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeStrategy/Public/RTSBasePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSBasePawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	REALTIMESTRATEGY_API UClass* Z_Construct_UClass_ARTSBasePawn();
	REALTIMESTRATEGY_API UClass* Z_Construct_UClass_ARTSBasePawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RealTimeStrategy();
// End Cross Module References
	void ARTSBasePawn::StaticRegisterNativesARTSBasePawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSBasePawn);
	UClass* Z_Construct_UClass_ARTSBasePawn_NoRegister()
	{
		return ARTSBasePawn::StaticClass();
	}
	struct Z_Construct_UClass_ARTSBasePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatingMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FloatingMovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSBasePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeStrategy,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBasePawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBasePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RTSBasePawn.h" },
		{ "ModuleRelativePath", "Public/RTSBasePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSBasePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSBasePawn, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_CapsuleComponent_MetaData), Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_CapsuleComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSBasePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSBasePawn, SkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_SkeletalMesh_MetaData), Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_SkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_FloatingMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSBasePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_FloatingMovementComponent = { "FloatingMovementComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSBasePawn, FloatingMovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_FloatingMovementComponent_MetaData), Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_FloatingMovementComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSBasePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_CapsuleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_FloatingMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSBasePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSBasePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSBasePawn_Statics::ClassParams = {
		&ARTSBasePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTSBasePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBasePawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBasePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ARTSBasePawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBasePawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARTSBasePawn()
	{
		if (!Z_Registration_Info_UClass_ARTSBasePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSBasePawn.OuterSingleton, Z_Construct_UClass_ARTSBasePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSBasePawn.OuterSingleton;
	}
	template<> REALTIMESTRATEGY_API UClass* StaticClass<ARTSBasePawn>()
	{
		return ARTSBasePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSBasePawn);
	ARTSBasePawn::~ARTSBasePawn() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_RTSBasePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_RTSBasePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSBasePawn, ARTSBasePawn::StaticClass, TEXT("ARTSBasePawn"), &Z_Registration_Info_UClass_ARTSBasePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSBasePawn), 2744386605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_RTSBasePawn_h_1731121128(TEXT("/Script/RealTimeStrategy"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_RTSBasePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_RTSBasePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
