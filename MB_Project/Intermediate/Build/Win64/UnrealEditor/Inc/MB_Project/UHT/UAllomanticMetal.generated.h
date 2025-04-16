// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UAllomanticMetal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MB_PROJECT_UAllomanticMetal_generated_h
#error "UAllomanticMetal.generated.h already included, missing '#pragma once' in UAllomanticMetal.h"
#endif
#define MB_PROJECT_UAllomanticMetal_generated_h

#define FID_GitHub_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAllomanticMetal(); \
	friend struct Z_Construct_UClass_UAllomanticMetal_Statics; \
public: \
	DECLARE_CLASS(UAllomanticMetal, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MB_Project"), NO_API) \
	DECLARE_SERIALIZER(UAllomanticMetal)


#define FID_GitHub_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAllomanticMetal(UAllomanticMetal&&); \
	UAllomanticMetal(const UAllomanticMetal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAllomanticMetal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAllomanticMetal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAllomanticMetal)


#define FID_GitHub_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_19_PROLOG
#define FID_GitHub_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_22_INCLASS_NO_PURE_DECLS \
	FID_GitHub_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MB_PROJECT_API UClass* StaticClass<class UAllomanticMetal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_MB_Project_MB_Project_Source_MB_Project_UAllomanticMetal_h


#define FOREACH_ENUM_EMETALTYPE(op) \
	op(EMetalType::NONE) \
	op(EMetalType::PEWTER) \
	op(EMetalType::IRON) \
	op(EMetalType::STEEL) 

enum class EMetalType : uint8;
template<> struct TIsUEnumClass<EMetalType> { enum { Value = true }; };
template<> MB_PROJECT_API UEnum* StaticEnum<EMetalType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
