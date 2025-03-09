// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RealTimeStrategy/Public/SelectableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectableInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	REALTIMESTRATEGY_API UClass* Z_Construct_UClass_USelectableInterface();
	REALTIMESTRATEGY_API UClass* Z_Construct_UClass_USelectableInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RealTimeStrategy();
// End Cross Module References
	DEFINE_FUNCTION(ISelectableInterface::execSelectActor)
	{
		P_GET_UBOOL(Z_Param_Select);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectActor_Implementation(Z_Param_Select);
		P_NATIVE_END;
	}
	struct SelectableInterface_eventSelectActor_Parms
	{
		bool Select;
	};
	void ISelectableInterface::SelectActor(bool Select)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SelectActor instead.");
	}
	void USelectableInterface::StaticRegisterNativesUSelectableInterface()
	{
		UClass* Class = USelectableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectActor", &ISelectableInterface::execSelectActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USelectableInterface_SelectActor_Statics
	{
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::NewProp_Select_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::NewProp_Select_SetBit(void* Obj)
	{
		((SelectableInterface_eventSelectActor_Parms*)Obj)->Select = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::NewProp_Select = { "Select", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SelectableInterface_eventSelectActor_Parms), &Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::NewProp_Select_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::NewProp_Select_MetaData), Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::NewProp_Select_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::NewProp_Select,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selectable Interface" },
		{ "ModuleRelativePath", "Public/SelectableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectableInterface, nullptr, "SelectActor", nullptr, nullptr, Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::PropPointers), sizeof(SelectableInterface_eventSelectActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::PropPointers) < 2048);
	static_assert(sizeof(SelectableInterface_eventSelectActor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USelectableInterface_SelectActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectableInterface_SelectActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectableInterface);
	UClass* Z_Construct_UClass_USelectableInterface_NoRegister()
	{
		return USelectableInterface::StaticClass();
	}
	struct Z_Construct_UClass_USelectableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RealTimeStrategy,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectableInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectableInterface_SelectActor, "SelectActor" }, // 136700389
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectableInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SelectableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISelectableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectableInterface_Statics::ClassParams = {
		&USelectableInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectableInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USelectableInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USelectableInterface()
	{
		if (!Z_Registration_Info_UClass_USelectableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectableInterface.OuterSingleton, Z_Construct_UClass_USelectableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelectableInterface.OuterSingleton;
	}
	template<> REALTIMESTRATEGY_API UClass* StaticClass<USelectableInterface>()
	{
		return USelectableInterface::StaticClass();
	}
	USelectableInterface::USelectableInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectableInterface);
	USelectableInterface::~USelectableInterface() {}
	static FName NAME_USelectableInterface_SelectActor = FName(TEXT("SelectActor"));
	void ISelectableInterface::Execute_SelectActor(UObject* O, bool Select)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USelectableInterface::StaticClass()));
		SelectableInterface_eventSelectActor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USelectableInterface_SelectActor);
		if (Func)
		{
			Parms.Select=Select;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISelectableInterface*)(O->GetNativeInterfaceAddress(USelectableInterface::StaticClass())))
		{
			I->SelectActor_Implementation(Select);
		}
	}
	struct Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_SelectableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_SelectableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USelectableInterface, USelectableInterface::StaticClass, TEXT("USelectableInterface"), &Z_Registration_Info_UClass_USelectableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectableInterface), 1304982793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_SelectableInterface_h_2863469144(TEXT("/Script/RealTimeStrategy"),
		Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_SelectableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RealTimeStrategy_Source_RealTimeStrategy_Public_SelectableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
