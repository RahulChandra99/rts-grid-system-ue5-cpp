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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	REALTIMESTRATEGY_API UClass* Z_Construct_UClass_ARTSBasePawn();
	REALTIMESTRATEGY_API UClass* Z_Construct_UClass_ARTSBasePawn_NoRegister();
	REALTIMESTRATEGY_API UClass* Z_Construct_UClass_USelectableInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RealTimeStrategy();
// End Cross Module References
	DEFINE_FUNCTION(ARTSBasePawn::execSelectActor_Implementation)
	{
		P_GET_UBOOL(Z_Param_Select);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectActor_Implementation(Z_Param_Select);
		P_NATIVE_END;
	}
	void ARTSBasePawn::StaticRegisterNativesARTSBasePawn()
	{
		UClass* Class = ARTSBasePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectActor_Implementation", &ARTSBasePawn::execSelectActor_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics
	{
		struct RTSBasePawn_eventSelectActor_Implementation_Parms
		{
			bool Select;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Select_MetaData[];
#endif
		static void NewProp_Select_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Select;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::NewProp_Select_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::NewProp_Select_SetBit(void* Obj)
	{
		((RTSBasePawn_eventSelectActor_Implementation_Parms*)Obj)->Select = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::NewProp_Select = { "Select", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTSBasePawn_eventSelectActor_Implementation_Parms), &Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::NewProp_Select_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::NewProp_Select_MetaData), Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::NewProp_Select_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::NewProp_Select,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RTSBasePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARTSBasePawn, nullptr, "SelectActor_Implementation", nullptr, nullptr, Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::RTSBasePawn_eventSelectActor_Implementation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::RTSBasePawn_eventSelectActor_Implementation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSBasePawn);
	UClass* Z_Construct_UClass_ARTSBasePawn_NoRegister()
	{
		return ARTSBasePawn::StaticClass();
	}
	struct Z_Construct_UClass_ARTSBasePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedIndicator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectedIndicator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSBasePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeStrategy,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBasePawn_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARTSBasePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTSBasePawn_SelectActor_Implementation, "SelectActor_Implementation" }, // 75727034
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBasePawn_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_SelectedIndicator_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTSBasePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_SelectedIndicator = { "SelectedIndicator", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARTSBasePawn, SelectedIndicator), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_SelectedIndicator_MetaData), Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_SelectedIndicator_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARTSBasePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_CapsuleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_FloatingMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARTSBasePawn_Statics::NewProp_SelectedIndicator,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARTSBasePawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USelectableInterface_NoRegister, (int32)VTABLE_OFFSET(ARTSBasePawn, ISelectableInterface), false },  // 1304982793
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBasePawn_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSBasePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSBasePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSBasePawn_Statics::ClassParams = {
		&ARTSBasePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARTSBasePawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARTSBasePawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_ARTSBasePawn, ARTSBasePawn::StaticClass, TEXT("ARTSBasePawn"), &Z_Registration_Info_UClass_ARTSBasePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSBasePawn), 1830992825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_RTSBasePawn_h_1127405027(TEXT("/Script/RealTimeStrategy"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_RTSBasePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_RTSBasePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
