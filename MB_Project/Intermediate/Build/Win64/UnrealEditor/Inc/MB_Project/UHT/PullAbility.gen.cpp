// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MB_Project/PullAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePullAbility() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticAbilityBase();
MB_PROJECT_API UClass* Z_Construct_UClass_UPullAbility();
MB_PROJECT_API UClass* Z_Construct_UClass_UPullAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin Class UPullAbility
void UPullAbility::StaticRegisterNativesUPullAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPullAbility);
UClass* Z_Construct_UClass_UPullAbility_NoRegister()
{
	return UPullAbility::StaticClass();
}
struct Z_Construct_UClass_UPullAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PullAbility.h" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetalPos_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//CHARACTER AND METAL WORLD POS AND DIRECTION\n" },
#endif
		{ "ModuleRelativePath", "PullAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CHARACTER AND METAL WORLD POS AND DIRECTION" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharPos_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullDir_MetaData[] = {
		{ "Category", "Pull" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullTarget_MetaData[] = {
		{ "Category", "Pull" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullForce_MetaData[] = {
		{ "Category", "Pull" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//AIR DRIFTING AND MOVEMENT\n" },
#endif
		{ "ModuleRelativePath", "PullAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AIR DRIFTING AND MOVEMENT" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredPullForce_MetaData[] = {
		{ "Category", "Pull" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Drag_MetaData[] = {
		{ "Category", "Pull Ability" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_initialDistance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0.98 or less than 1 this would slow speed and give inertia feel\n" },
#endif
		{ "ModuleRelativePath", "PullAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0.98 or less than 1 this would slow speed and give inertia feel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currDistance_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTriggered_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerValue_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanPull_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLaunchForce_MetaData[] = {
		{ "Category", "Pull Ability" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLaunchDirAngle_MetaData[] = {
		{ "Category", "Pull Ability" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLaunchTimeDuration_MetaData[] = {
		{ "Category", "Pull Ability" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityStartTime_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCurrentDuration_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullForceCurve_MetaData[] = {
		{ "Category", "Pull Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//debug purposes\n" },
#endif
		{ "ModuleRelativePath", "PullAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "debug purposes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateCurve_MetaData[] = {
		{ "Category", "Pull Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Curve controlling lift or arc over time\n" },
#endif
		{ "ModuleRelativePath", "PullAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Curve controlling lift or arc over time" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPullForce_MetaData[] = {
		{ "Category", "Pull" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrPullForce_MetaData[] = {
		{ "Category", "Pull" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistance_MetaData[] = {
		{ "Category", "Pull" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Pull" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetalPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PullDir;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PullTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PullForce;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredPullForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Drag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_initialDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currDistance;
	static void NewProp_bIsTriggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTriggered;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerValue;
	static void NewProp_bCanPull_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPull;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialLaunchForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialLaunchDirAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialLaunchTimeDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityStartTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityCurrentDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PullForceCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnRateCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPullForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrPullForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPullAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_MetalPos = { "MetalPos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, MetalPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetalPos_MetaData), NewProp_MetalPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_CharPos = { "CharPos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, CharPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharPos_MetaData), NewProp_CharPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_PullDir = { "PullDir", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, PullDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullDir_MetaData), NewProp_PullDir_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_PullTarget = { "PullTarget", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, PullTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullTarget_MetaData), NewProp_PullTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_PullForce = { "PullForce", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, PullForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullForce_MetaData), NewProp_PullForce_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_DesiredPullForce = { "DesiredPullForce", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, DesiredPullForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredPullForce_MetaData), NewProp_DesiredPullForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, Drag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Drag_MetaData), NewProp_Drag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_initialDistance = { "initialDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, initialDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_initialDistance_MetaData), NewProp_initialDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_currDistance = { "currDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, currDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currDistance_MetaData), NewProp_currDistance_MetaData) };
void Z_Construct_UClass_UPullAbility_Statics::NewProp_bIsTriggered_SetBit(void* Obj)
{
	((UPullAbility*)Obj)->bIsTriggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_bIsTriggered = { "bIsTriggered", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPullAbility), &Z_Construct_UClass_UPullAbility_Statics::NewProp_bIsTriggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTriggered_MetaData), NewProp_bIsTriggered_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, TriggerValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerValue_MetaData), NewProp_TriggerValue_MetaData) };
void Z_Construct_UClass_UPullAbility_Statics::NewProp_bCanPull_SetBit(void* Obj)
{
	((UPullAbility*)Obj)->bCanPull = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_bCanPull = { "bCanPull", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPullAbility), &Z_Construct_UClass_UPullAbility_Statics::NewProp_bCanPull_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanPull_MetaData), NewProp_bCanPull_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_InitialLaunchForce = { "InitialLaunchForce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, InitialLaunchForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLaunchForce_MetaData), NewProp_InitialLaunchForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_InitialLaunchDirAngle = { "InitialLaunchDirAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, InitialLaunchDirAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLaunchDirAngle_MetaData), NewProp_InitialLaunchDirAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_InitialLaunchTimeDuration = { "InitialLaunchTimeDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, InitialLaunchTimeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLaunchTimeDuration_MetaData), NewProp_InitialLaunchTimeDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_AbilityStartTime = { "AbilityStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, AbilityStartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityStartTime_MetaData), NewProp_AbilityStartTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_AbilityCurrentDuration = { "AbilityCurrentDuration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, AbilityCurrentDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCurrentDuration_MetaData), NewProp_AbilityCurrentDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_PullForceCurve = { "PullForceCurve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, PullForceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullForceCurve_MetaData), NewProp_PullForceCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_TurnRateCurve = { "TurnRateCurve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, TurnRateCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnRateCurve_MetaData), NewProp_TurnRateCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_MaxPullForce = { "MaxPullForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, MaxPullForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPullForce_MetaData), NewProp_MaxPullForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_CurrPullForce = { "CurrPullForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, CurrPullForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrPullForce_MetaData), NewProp_CurrPullForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, MinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistance_MetaData), NewProp_MinDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPullAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_MetalPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_CharPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_PullDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_PullTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_PullForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_DesiredPullForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_Drag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_initialDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_currDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_bIsTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_TriggerValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_bCanPull,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_InitialLaunchForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_InitialLaunchDirAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_InitialLaunchTimeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_AbilityStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_AbilityCurrentDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_PullForceCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_TurnRateCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_MaxPullForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_CurrPullForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_MinDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_MaxDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPullAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPullAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAllomanticAbilityBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MB_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPullAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPullAbility_Statics::ClassParams = {
	&UPullAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPullAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPullAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPullAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UPullAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPullAbility()
{
	if (!Z_Registration_Info_UClass_UPullAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPullAbility.OuterSingleton, Z_Construct_UClass_UPullAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPullAbility.OuterSingleton;
}
template<> MB_PROJECT_API UClass* StaticClass<UPullAbility>()
{
	return UPullAbility::StaticClass();
}
UPullAbility::UPullAbility() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPullAbility);
UPullAbility::~UPullAbility() {}
// End Class UPullAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_PullAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPullAbility, UPullAbility::StaticClass, TEXT("UPullAbility"), &Z_Registration_Info_UClass_UPullAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPullAbility), 800133418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_PullAbility_h_2359292361(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_PullAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_PullAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
