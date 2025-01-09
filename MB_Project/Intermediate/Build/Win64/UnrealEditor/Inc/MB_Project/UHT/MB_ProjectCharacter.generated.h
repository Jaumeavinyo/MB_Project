// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MB_ProjectCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMetal;
#ifdef MB_PROJECT_MB_ProjectCharacter_generated_h
#error "MB_ProjectCharacter.generated.h already included, missing '#pragma once' in MB_ProjectCharacter.h"
#endif
#define MB_PROJECT_MB_ProjectCharacter_generated_h

#define FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSortMetals); \
	DECLARE_FUNCTION(execGetSceneMetals);


#define FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMB_ProjectCharacter(); \
	friend struct Z_Construct_UClass_AMB_ProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMB_ProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MB_Project"), NO_API) \
	DECLARE_SERIALIZER(AMB_ProjectCharacter)


#define FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMB_ProjectCharacter(AMB_ProjectCharacter&&); \
	AMB_ProjectCharacter(const AMB_ProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMB_ProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMB_ProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMB_ProjectCharacter) \
	NO_API virtual ~AMB_ProjectCharacter();


#define FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h_20_PROLOG
#define FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MB_PROJECT_API UClass* StaticClass<class AMB_ProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
