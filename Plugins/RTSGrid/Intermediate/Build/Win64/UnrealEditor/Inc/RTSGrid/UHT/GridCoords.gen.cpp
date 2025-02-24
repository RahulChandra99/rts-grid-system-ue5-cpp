// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSGrid/Public/GridCoords.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridCoords() {}
// Cross Module References
	RTSGRID_API UScriptStruct* Z_Construct_UScriptStruct_FGridCoord();
	UPackage* Z_Construct_UPackage__Script_RTSGrid();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridCoord;
class UScriptStruct* FGridCoord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridCoord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridCoord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridCoord, (UObject*)Z_Construct_UPackage__Script_RTSGrid(), TEXT("GridCoord"));
	}
	return Z_Registration_Info_UScriptStruct_GridCoord.OuterSingleton;
}
template<> RTSGRID_API UScriptStruct* StaticStruct<FGridCoord>()
{
	return FGridCoord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridCoord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Column;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Row;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridCoord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GridCoords.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridCoord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridCoord>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridCoord_Statics::NewProp_Column_MetaData[] = {
		{ "Category", "Grids" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid Location Column, or Y component\n" },
#endif
		{ "ModuleRelativePath", "Public/GridCoords.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid Location Column, or Y component" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridCoord_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCoord, Column), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCoord_Statics::NewProp_Column_MetaData), Z_Construct_UScriptStruct_FGridCoord_Statics::NewProp_Column_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridCoord_Statics::NewProp_Row_MetaData[] = {
		{ "Category", "Grids" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid Location Row, or X component\n" },
#endif
		{ "ModuleRelativePath", "Public/GridCoords.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid Location Row, or X component" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridCoord_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCoord, Row), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCoord_Statics::NewProp_Row_MetaData), Z_Construct_UScriptStruct_FGridCoord_Statics::NewProp_Row_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridCoord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCoord_Statics::NewProp_Column,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCoord_Statics::NewProp_Row,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridCoord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RTSGrid,
		nullptr,
		&NewStructOps,
		"GridCoord",
		Z_Construct_UScriptStruct_FGridCoord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCoord_Statics::PropPointers),
		sizeof(FGridCoord),
		alignof(FGridCoord),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCoord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridCoord_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCoord_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGridCoord()
	{
		if (!Z_Registration_Info_UScriptStruct_GridCoord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridCoord.InnerSingleton, Z_Construct_UScriptStruct_FGridCoord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridCoord.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_udemy_unreal_engine_cpp_101_master_Plugins_RTSGrid_Source_RTSGrid_Public_GridCoords_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_udemy_unreal_engine_cpp_101_master_Plugins_RTSGrid_Source_RTSGrid_Public_GridCoords_h_Statics::ScriptStructInfo[] = {
		{ FGridCoord::StaticStruct, Z_Construct_UScriptStruct_FGridCoord_Statics::NewStructOps, TEXT("GridCoord"), &Z_Registration_Info_UScriptStruct_GridCoord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridCoord), 854754953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_udemy_unreal_engine_cpp_101_master_Plugins_RTSGrid_Source_RTSGrid_Public_GridCoords_h_3317594198(TEXT("/Script/RTSGrid"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_udemy_unreal_engine_cpp_101_master_Plugins_RTSGrid_Source_RTSGrid_Public_GridCoords_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_udemy_unreal_engine_cpp_101_master_Plugins_RTSGrid_Source_RTSGrid_Public_GridCoords_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
