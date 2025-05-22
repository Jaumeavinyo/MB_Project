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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullDir_MetaData[] = {
		{ "Category", "Pull" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullTarget_MetaData[] = {
		{ "Category", "Pull" },
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetalPos_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharPos_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTriggered_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerValue_MetaData[] = {
		{ "ModuleRelativePath", "PullAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PullForce_MetaData[] = {
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
	static const UECodeGen_Private::FStructPropertyParams NewProp_PullDir;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PullTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetalPos;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharPos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static void NewProp_bIsTriggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTriggered;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PullForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPullAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_PullDir = { "PullDir", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, PullDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullDir_MetaData), NewProp_PullDir_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_PullTarget = { "PullTarget", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, PullTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullTarget_MetaData), NewProp_PullTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_MetalPos = { "MetalPos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, MetalPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetalPos_MetaData), NewProp_MetalPos_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_CharPos = { "CharPos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, CharPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharPos_MetaData), NewProp_CharPos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
void Z_Construct_UClass_UPullAbility_Statics::NewProp_bIsTriggered_SetBit(void* Obj)
{
	((UPullAbility*)Obj)->bIsTriggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_bIsTriggered = { "bIsTriggered", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPullAbility), &Z_Construct_UClass_UPullAbility_Statics::NewProp_bIsTriggered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTriggered_MetaData), NewProp_bIsTriggered_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, TriggerValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerValue_MetaData), NewProp_TriggerValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_PullForce = { "PullForce", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, PullForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PullForce_MetaData), NewProp_PullForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_MinDistance = { "MinDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, MinDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistance_MetaData), NewProp_MinDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPullAbility_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPullAbility, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPullAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_PullDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_PullTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_MetalPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_CharPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_bIsTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_TriggerValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPullAbility_Statics::NewProp_PullForce,
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
		{ Z_Construct_UClass_UPullAbility, UPullAbility::StaticClass, TEXT("UPullAbility"), &Z_Registration_Info_UClass_UPullAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPullAbility), 3510054096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_PullAbility_h_2433920814(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_PullAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_PullAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
