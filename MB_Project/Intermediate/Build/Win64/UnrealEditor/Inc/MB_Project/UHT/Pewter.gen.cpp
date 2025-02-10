// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MB_Project/Pewter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePewter() {}

// Begin Cross Module References
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticMetal();
MB_PROJECT_API UClass* Z_Construct_UClass_UPewter();
MB_PROJECT_API UClass* Z_Construct_UClass_UPewter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin Class UPewter
void UPewter::StaticRegisterNativesUPewter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPewter);
UClass* Z_Construct_UClass_UPewter_NoRegister()
{
	return UPewter::StaticClass();
}
struct Z_Construct_UClass_UPewter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Pewter.h" },
		{ "ModuleRelativePath", "Pewter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPewter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPewter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAllomanticMetal,
	(UObject* (*)())Z_Construct_UPackage__Script_MB_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPewter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPewter_Statics::ClassParams = {
	&UPewter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPewter_Statics::Class_MetaDataParams), Z_Construct_UClass_UPewter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPewter()
{
	if (!Z_Registration_Info_UClass_UPewter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPewter.OuterSingleton, Z_Construct_UClass_UPewter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPewter.OuterSingleton;
}
template<> MB_PROJECT_API UClass* StaticClass<UPewter>()
{
	return UPewter::StaticClass();
}
UPewter::UPewter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPewter);
UPewter::~UPewter() {}
// End Class UPewter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_Pewter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPewter, UPewter::StaticClass, TEXT("UPewter"), &Z_Registration_Info_UClass_UPewter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPewter), 1317865107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_Pewter_h_2060985961(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_Pewter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_Pewter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
