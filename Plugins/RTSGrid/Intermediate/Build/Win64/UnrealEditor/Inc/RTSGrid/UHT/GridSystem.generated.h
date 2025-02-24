// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GridSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGridCoord;
#ifdef RTSGRID_GridSystem_generated_h
#error "GridSystem.generated.h already included, missing '#pragma once' in GridSystem.h"
#endif
#define RTSGRID_GridSystem_generated_h

#define FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_SPARSE_DATA
#define FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCellIDFromCoordinate); \
	DECLARE_FUNCTION(execGetCoordinateFromCellID); \
	DECLARE_FUNCTION(execGetCoordinateFromRelative); \
	DECLARE_FUNCTION(execIsValidLocation); \
	DECLARE_FUNCTION(execIsClearTile); \
	DECLARE_FUNCTION(execIsInGridBounds); \
	DECLARE_FUNCTION(execGetCellCenterFromRelative); \
	DECLARE_FUNCTION(execGetGridRelativeFromWorld); \
	DECLARE_FUNCTION(execGetGridExtents); \
	DECLARE_FUNCTION(execGetGridSize); \
	DECLARE_FUNCTION(execGetGridWorldOriginWorld); \
	DECLARE_FUNCTION(execGetGridOriginRelative); \
	DECLARE_FUNCTION(execGenerateGrid);


#define FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_ACCESSORS
#define FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridSystem(); \
	friend struct Z_Construct_UClass_AGridSystem_Statics; \
public: \
	DECLARE_CLASS(AGridSystem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTSGrid"), NO_API) \
	DECLARE_SERIALIZER(AGridSystem)


#define FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGridSystem(AGridSystem&&); \
	NO_API AGridSystem(const AGridSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridSystem) \
	NO_API virtual ~AGridSystem();


#define FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_10_PROLOG
#define FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_SPARSE_DATA \
	FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_ACCESSORS \
	FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_INCLASS_NO_PURE_DECLS \
	FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTSGRID_API UClass* StaticClass<class AGridSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameDevelopment_UnrealEngine_Projects_turnbased_grid_system_ue5_cpp_Plugins_RTSGrid_Source_RTSGrid_Public_GridSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
