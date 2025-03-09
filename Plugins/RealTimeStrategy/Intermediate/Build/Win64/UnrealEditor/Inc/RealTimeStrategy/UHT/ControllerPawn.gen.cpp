// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeStrategy/Public/ControllerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControllerPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	REALTIMESTRATEGY_API UClass* Z_Construct_UClass_AControllerPawn();
	REALTIMESTRATEGY_API UClass* Z_Construct_UClass_AControllerPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RealTimeStrategy();
// End Cross Module References
	void AControllerPawn::StaticRegisterNativesAControllerPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AControllerPawn);
	UClass* Z_Construct_UClass_AControllerPawn_NoRegister()
	{
		return AControllerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AControllerPawn_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatingMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FloatingMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ZoomAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraZoomSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCameraZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCameraZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCameraZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCameraZoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControllerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeStrategy,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ControllerPawn.h" },
		{ "ModuleRelativePath", "Public/ControllerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerPawn_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControllerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AControllerPawn_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControllerPawn, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::NewProp_CapsuleComponent_MetaData), Z_Construct_UClass_AControllerPawn_Statics::NewProp_CapsuleComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControllerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AControllerPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControllerPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::NewProp_SpringArm_MetaData), Z_Construct_UClass_AControllerPawn_Statics::NewProp_SpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControllerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AControllerPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControllerPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_AControllerPawn_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerPawn_Statics::NewProp_FloatingMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControllerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AControllerPawn_Statics::NewProp_FloatingMovementComponent = { "FloatingMovementComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControllerPawn, FloatingMovementComponent), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::NewProp_FloatingMovementComponent_MetaData), Z_Construct_UClass_AControllerPawn_Statics::NewProp_FloatingMovementComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerPawn_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ControllerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AControllerPawn_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControllerPawn, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AControllerPawn_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerPawn_Statics::NewProp_ZoomAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ControllerPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AControllerPawn_Statics::NewProp_ZoomAction = { "ZoomAction", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControllerPawn, ZoomAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::NewProp_ZoomAction_MetaData), Z_Construct_UClass_AControllerPawn_Statics::NewProp_ZoomAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerPawn_Statics::NewProp_CameraZoomSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ControllerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AControllerPawn_Statics::NewProp_CameraZoomSpeed = { "CameraZoomSpeed", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControllerPawn, CameraZoomSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::NewProp_CameraZoomSpeed_MetaData), Z_Construct_UClass_AControllerPawn_Statics::NewProp_CameraZoomSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerPawn_Statics::NewProp_MaxCameraZoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ControllerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AControllerPawn_Statics::NewProp_MaxCameraZoom = { "MaxCameraZoom", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControllerPawn, MaxCameraZoom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::NewProp_MaxCameraZoom_MetaData), Z_Construct_UClass_AControllerPawn_Statics::NewProp_MaxCameraZoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControllerPawn_Statics::NewProp_MinCameraZoom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ControllerPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AControllerPawn_Statics::NewProp_MinCameraZoom = { "MinCameraZoom", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControllerPawn, MinCameraZoom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::NewProp_MinCameraZoom_MetaData), Z_Construct_UClass_AControllerPawn_Statics::NewProp_MinCameraZoom_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AControllerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerPawn_Statics::NewProp_CapsuleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerPawn_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerPawn_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerPawn_Statics::NewProp_FloatingMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerPawn_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerPawn_Statics::NewProp_ZoomAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerPawn_Statics::NewProp_CameraZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerPawn_Statics::NewProp_MaxCameraZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerPawn_Statics::NewProp_MinCameraZoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControllerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControllerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AControllerPawn_Statics::ClassParams = {
		&AControllerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AControllerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AControllerPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AControllerPawn()
	{
		if (!Z_Registration_Info_UClass_AControllerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AControllerPawn.OuterSingleton, Z_Construct_UClass_AControllerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AControllerPawn.OuterSingleton;
	}
	template<> REALTIMESTRATEGY_API UClass* StaticClass<AControllerPawn>()
	{
		return AControllerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControllerPawn);
	AControllerPawn::~AControllerPawn() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_ControllerPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_ControllerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AControllerPawn, AControllerPawn::StaticClass, TEXT("AControllerPawn"), &Z_Registration_Info_UClass_AControllerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AControllerPawn), 1042271651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_ControllerPawn_h_217998278(TEXT("/Script/RealTimeStrategy"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_ControllerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_ControllerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
