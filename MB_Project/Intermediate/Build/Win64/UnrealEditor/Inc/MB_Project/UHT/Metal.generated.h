// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Metal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
#ifdef MB_PROJECT_Metal_generated_h
#error "Metal.generated.h already included, missing '#pragma once' in Metal.h"
#endif
#define MB_PROJECT_Metal_generated_h

#define FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetMaterial); \
	DECLARE_FUNCTION(execChangeMaterial);


#define FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMetal(); \
	friend struct Z_Construct_UClass_AMetal_Statics; \
public: \
	DECLARE_CLASS(AMetal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MB_Project"), NO_API) \
	DECLARE_SERIALIZER(AMetal)


#define FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMetal(AMetal&&); \
	AMetal(const AMetal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMetal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMetal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMetal) \
	NO_API virtual ~AMetal();


#define FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h_9_PROLOG
#define FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MB_PROJECT_API UClass* StaticClass<class AMetal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
