// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSGrid/Public/RTSCameraPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSCameraPawn() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	RTSGRID_API UClass* Z_Construct_UClass_ARTSCameraPawn();
	RTSGRID_API UClass* Z_Construct_UClass_ARTSCameraPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RTSGrid();
// End Cross Module References
	void ARTSCameraPawn::StaticRegisterNativesARTSCameraPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSCameraPawn);
	UClass* Z_Construct_UClass_ARTSCameraPawn_NoRegister()
	{
		return ARTSCameraPawn::StaticClass();
	}
	struct Z_Construct_UClass_ARTSCameraPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenEdgePadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenEdgePadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputMoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentInputMoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraHeightSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraHeightSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRotate_MetaData[];
#endif
		static void NewProp_bShouldRotate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRotate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraHeightAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraHeightAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotateAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LookAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSCameraPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSGrid,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RTSCameraPawn.h" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCameraPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_ScreenEdgePadding_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_ScreenEdgePadding = { "ScreenEdgePadding", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCameraPawn, ScreenEdgePadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_ScreenEdgePadding_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_ScreenEdgePadding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCameraPawn, MoveSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MoveSpeed_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MoveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCameraPawn, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_PlayerController_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_PlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CurrentInputMoveSpeed_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CurrentInputMoveSpeed = { "CurrentInputMoveSpeed", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCameraPawn, CurrentInputMoveSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CurrentInputMoveSpeed_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CurrentInputMoveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraHeightSpeed_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraHeightSpeed = { "CameraHeightSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCameraPawn, CameraHeightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraHeightSpeed_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraHeightSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCameraPawn, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_RotationSpeed_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_RotationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_bShouldRotate_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	void Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_bShouldRotate_SetBit(void* Obj)
	{
		((ARTSCameraPawn*)Obj)->bShouldRotate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_bShouldRotate = { "bShouldRotate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTSCameraPawn), &Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_bShouldRotate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_bShouldRotate_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_bShouldRotate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MappingContext_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCameraPawn, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MappingContext_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCameraPawn, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraHeightAction_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraHeightAction = { "CameraHeightAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCameraPawn, CameraHeightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraHeightAction_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraHeightAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_RotateAction_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_RotateAction = { "RotateAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCameraPawn, RotateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_RotateAction_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_RotateAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/RTSCameraPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSCameraPawn, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_LookAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSCameraPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_ScreenEdgePadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CurrentInputMoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraHeightSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_bShouldRotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_CameraHeightAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_RotateAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSCameraPawn_Statics::NewProp_LookAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSCameraPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSCameraPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSCameraPawn_Statics::ClassParams = {
		&ARTSCameraPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARTSCameraPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ARTSCameraPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSCameraPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARTSCameraPawn()
	{
		if (!Z_Registration_Info_UClass_ARTSCameraPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSCameraPawn.OuterSingleton, Z_Construct_UClass_ARTSCameraPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSCameraPawn.OuterSingleton;
	}
	template<> RTSGRID_API UClass* StaticClass<ARTSCameraPawn>()
	{
		return ARTSCameraPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSCameraPawn);
	ARTSCameraPawn::~ARTSCameraPawn() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_RTSCameraPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_RTSCameraPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSCameraPawn, ARTSCameraPawn::StaticClass, TEXT("ARTSCameraPawn"), &Z_Registration_Info_UClass_ARTSCameraPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSCameraPawn), 2023834819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_RTSCameraPawn_h_1342581097(TEXT("/Script/RTSGrid"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_RTSCameraPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_RTSCameraPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
