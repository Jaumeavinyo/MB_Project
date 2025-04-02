// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MB_Project/UAllomanticAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUAllomanticAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticAbility();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin Class UAllomanticAbility
void UAllomanticAbility::StaticRegisterNativesUAllomanticAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAllomanticAbility);
UClass* Z_Construct_UClass_UAllomanticAbility_NoRegister()
{
	return UAllomanticAbility::StaticClass();
}
struct Z_Construct_UClass_UAllomanticAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UAllomanticAbility.h" },
		{ "ModuleRelativePath", "UAllomanticAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAllomanticAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAllomanticAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MB_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomanticAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAllomanticAbility_Statics::ClassParams = {
	&UAllomanticAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomanticAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAllomanticAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAllomanticAbility()
{
	if (!Z_Registration_Info_UClass_UAllomanticAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAllomanticAbility.OuterSingleton, Z_Construct_UClass_UAllomanticAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAllomanticAbility.OuterSingleton;
}
template<> MB_PROJECT_API UClass* StaticClass<UAllomanticAbility>()
{
	return UAllomanticAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAllomanticAbility);
// End Class UAllomanticAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_MB_Project_MB_Project_Source_MB_Project_UAllomanticAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAllomanticAbility, UAllomanticAbility::StaticClass, TEXT("UAllomanticAbility"), &Z_Registration_Info_UClass_UAllomanticAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAllomanticAbility), 3826176436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_MB_Project_MB_Project_Source_MB_Project_UAllomanticAbility_h_2597957832(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_GitHub_MB_Project_MB_Project_Source_MB_Project_UAllomanticAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_MB_Project_MB_Project_Source_MB_Project_UAllomanticAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
