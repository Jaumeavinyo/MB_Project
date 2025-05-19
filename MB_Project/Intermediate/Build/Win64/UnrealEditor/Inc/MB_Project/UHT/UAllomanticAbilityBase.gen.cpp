// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MB_Project/UAllomanticAbilityBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUAllomanticAbilityBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticAbilityBase();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticAbilityBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin Class UAllomanticAbilityBase
void UAllomanticAbilityBase::StaticRegisterNativesUAllomanticAbilityBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAllomanticAbilityBase);
UClass* Z_Construct_UClass_UAllomanticAbilityBase_NoRegister()
{
	return UAllomanticAbilityBase::StaticClass();
}
struct Z_Construct_UClass_UAllomanticAbilityBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UAllomanticAbilityBase.h" },
		{ "ModuleRelativePath", "UAllomanticAbilityBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "AllomanticAbilityBase" },
		{ "ModuleRelativePath", "UAllomanticAbilityBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAllomanticAbilityBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAllomanticAbilityBase_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((UAllomanticAbilityBase*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAllomanticAbilityBase_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAllomanticAbilityBase), &Z_Construct_UClass_UAllomanticAbilityBase_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAllomanticAbilityBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomanticAbilityBase_Statics::NewProp_bIsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomanticAbilityBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAllomanticAbilityBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MB_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomanticAbilityBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAllomanticAbilityBase_Statics::ClassParams = {
	&UAllomanticAbilityBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAllomanticAbilityBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAllomanticAbilityBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomanticAbilityBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAllomanticAbilityBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAllomanticAbilityBase()
{
	if (!Z_Registration_Info_UClass_UAllomanticAbilityBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAllomanticAbilityBase.OuterSingleton, Z_Construct_UClass_UAllomanticAbilityBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAllomanticAbilityBase.OuterSingleton;
}
template<> MB_PROJECT_API UClass* StaticClass<UAllomanticAbilityBase>()
{
	return UAllomanticAbilityBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAllomanticAbilityBase);
// End Class UAllomanticAbilityBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticAbilityBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAllomanticAbilityBase, UAllomanticAbilityBase::StaticClass, TEXT("UAllomanticAbilityBase"), &Z_Registration_Info_UClass_UAllomanticAbilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAllomanticAbilityBase), 82003938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticAbilityBase_h_2677388477(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticAbilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_UAllomanticAbilityBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
