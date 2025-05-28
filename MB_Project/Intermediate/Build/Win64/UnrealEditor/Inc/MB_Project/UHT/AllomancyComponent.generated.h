// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AllomancyComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class AMetal;
class UAllomanticAbilityBase;
class UAllomanticMetal;
enum class EMetalType : uint8;
struct FGameplayInput;
#ifdef MB_PROJECT_AllomancyComponent_generated_h
#error "AllomancyComponent.generated.h already included, missing '#pragma once' in AllomancyComponent.h"
#endif
#define MB_PROJECT_AllomancyComponent_generated_h

#define FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInput_Statics; \
	MB_PROJECT_API static class UScriptStruct* StaticStruct();


template<> MB_PROJECT_API UScriptStruct* StaticStruct<struct FGameplayInput>();

#define FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectMetal); \
	DECLARE_FUNCTION(execsortSceneMetals); \
	DECLARE_FUNCTION(execgetAllomanticMetal); \
	DECLARE_FUNCTION(execPullTriggerInput); \
	DECLARE_FUNCTION(execActivateAbility);


#define FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAllomancyComponent(); \
	friend struct Z_Construct_UClass_UAllomancyComponent_Statics; \
public: \
	DECLARE_CLASS(UAllomancyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MB_Project"), NO_API) \
	DECLARE_SERIALIZER(UAllomancyComponent)


#define FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAllomancyComponent(UAllomancyComponent&&); \
	UAllomancyComponent(const UAllomancyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAllomancyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAllomancyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAllomancyComponent) \
	NO_API virtual ~UAllomancyComponent();


#define FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_29_PROLOG
#define FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MB_PROJECT_API UClass* StaticClass<class UAllomancyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
