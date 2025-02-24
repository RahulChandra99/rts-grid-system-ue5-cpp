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
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridsCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridsCharacter_Statics::NewProp_BuildingBaseType,
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
	struct Z_CompiledInDeferFile_FID_udemy_unreal_engine_cpp_101_master_Plugins_RTSGrid_Source_RTSGrid_Public_GridsCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_udemy_unreal_engine_cpp_101_master_Plugins_RTSGrid_Source_RTSGrid_Public_GridsCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridsCharacter, AGridsCharacter::StaticClass, TEXT("AGridsCharacter"), &Z_Registration_Info_UClass_AGridsCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridsCharacter), 2328557289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_udemy_unreal_engine_cpp_101_master_Plugins_RTSGrid_Source_RTSGrid_Public_GridsCharacter_h_3464945867(TEXT("/Script/RTSGrid"),
		Z_CompiledInDeferFile_FID_udemy_unreal_engine_cpp_101_master_Plugins_RTSGrid_Source_RTSGrid_Public_GridsCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_udemy_unreal_engine_cpp_101_master_Plugins_RTSGrid_Source_RTSGrid_Public_GridsCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
