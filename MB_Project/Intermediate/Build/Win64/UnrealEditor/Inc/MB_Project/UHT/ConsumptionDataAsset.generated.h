// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConsumptionDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MB_PROJECT_ConsumptionDataAsset_generated_h
#error "ConsumptionDataAsset.generated.h already included, missing '#pragma once' in ConsumptionDataAsset.h"
#endif
#define MB_PROJECT_ConsumptionDataAsset_generated_h

#define FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValueAtTime);


#define FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsumptionDataAsset(); \
	friend struct Z_Construct_UClass_UConsumptionDataAsset_Statics; \
public: \
	DECLARE_CLASS(UConsumptionDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MB_Project"), NO_API) \
	DECLARE_SERIALIZER(UConsumptionDataAsset)


#define FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsumptionDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConsumptionDataAsset(UConsumptionDataAsset&&); \
	UConsumptionDataAsset(const UConsumptionDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsumptionDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsumptionDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsumptionDataAsset) \
	NO_API virtual ~UConsumptionDataAsset();


#define FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h_12_PROLOG
#define FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h_15_INCLASS_NO_PURE_DECLS \
	FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MB_PROJECT_API UClass* StaticClass<class UConsumptionDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_MB_Project_MB_Project_Source_MB_Project_ConsumptionDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
