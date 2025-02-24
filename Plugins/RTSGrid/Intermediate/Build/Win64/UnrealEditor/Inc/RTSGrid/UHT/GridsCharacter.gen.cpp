// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSGrid/Public/GridsCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridsCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	RTSGRID_API UClass* Z_Construct_UClass_ABuildingBase_NoRegister();
	RTSGRID_API UClass* Z_Construct_UClass_AGridsCharacter();
	RTSGRID_API UClass* Z_Construct_UClass_AGridsCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RTSGrid();
// End Cross Module References
	void AGridsCharacter::StaticRegisterNativesAGridsCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridsCharacter);
	UClass* Z_Construct_UClass_AGridsCharacter_NoRegister()
	{
		return AGridsCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGridsCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingBaseType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BuildingBaseType;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LMBAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LMBAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridsCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSGrid,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GridsCharacter.h" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_SpringArm_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_SpringArm_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_BuildingBaseType_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_BuildingBaseType = { "BuildingBaseType", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, BuildingBaseType), Z_Construct_UClass_UClass, Z_Construct_UClass_ABuildingBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_BuildingBaseType_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_BuildingBaseType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_ScreenEdgePadding_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_ScreenEdgePadding = { "ScreenEdgePadding", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, ScreenEdgePadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_ScreenEdgePadding_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_ScreenEdgePadding_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, MoveSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MoveSpeed_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MoveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_PlayerController_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_PlayerController_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CurrentInputMoveSpeed_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CurrentInputMoveSpeed = { "CurrentInputMoveSpeed", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, CurrentInputMoveSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CurrentInputMoveSpeed_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CurrentInputMoveSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraHeightSpeed_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraHeightSpeed = { "CameraHeightSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, CameraHeightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraHeightSpeed_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraHeightSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_RotationSpeed_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_RotationSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_bShouldRotate_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGridsCharacter_Statics::NewProp_bShouldRotate_SetBit(void* Obj)
	{
		((AGridsCharacter*)Obj)->bShouldRotate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_bShouldRotate = { "bShouldRotate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridsCharacter), &Z_Construct_UClass_AGridsCharacter_Statics::NewProp_bShouldRotate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_bShouldRotate_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_bShouldRotate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MappingContext_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MappingContext_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraHeightAction_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraHeightAction = { "CameraHeightAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, CameraHeightAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraHeightAction_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraHeightAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_RotateAction_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_RotateAction = { "RotateAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, RotateAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_RotateAction_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_RotateAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridsCharacter_Statics::NewProp_LMBAction_MetaData[] = {
		{ "Category", "RTSCamera" },
		{ "ModuleRelativePath", "Public/GridsCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGridsCharacter_Statics::NewProp_LMBAction = { "LMBAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridsCharacter, LMBAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::NewProp_LMBAction_MetaData), Z_Construct_UClass_AGridsCharacter_Statics::NewProp_LMBAction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridsCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_BuildingBaseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_ScreenEdgePadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CurrentInputMoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraHeightSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_bShouldRotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_CameraHeightAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_RotateAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_LMBAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridsCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridsCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridsCharacter_Statics::ClassParams = {
		&AGridsCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGridsCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridsCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridsCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGridsCharacter()
	{
		if (!Z_Registration_Info_UClass_AGridsCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridsCharacter.OuterSingleton, Z_Construct_UClass_AGridsCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridsCharacter.OuterSingleton;
	}
	template<> RTSGRID_API UClass* StaticClass<AGridsCharacter>()
	{
		return AGridsCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridsCharacter);
	AGridsCharacter::~AGridsCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridsCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridsCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridsCharacter, AGridsCharacter::StaticClass, TEXT("AGridsCharacter"), &Z_Registration_Info_UClass_AGridsCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridsCharacter), 1996207988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridsCharacter_h_1851872958(TEXT("/Script/RTSGrid"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridsCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridsCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
