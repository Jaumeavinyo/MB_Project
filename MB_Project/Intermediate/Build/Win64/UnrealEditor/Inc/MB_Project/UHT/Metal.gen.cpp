// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MB_Project/Metal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetal() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_AMetal();
MB_PROJECT_API UClass* Z_Construct_UClass_AMetal_NoRegister();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin Class AMetal Function ChangeMaterial
struct Z_Construct_UFunction_AMetal_ChangeMaterial_Statics
{
	struct Metal_eventChangeMaterial_Parms
	{
		UMaterialInterface* mat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//functions .............\n" },
#endif
		{ "ModuleRelativePath", "Metal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "functions ............." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMetal_ChangeMaterial_Statics::NewProp_mat = { "mat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Metal_eventChangeMaterial_Parms, mat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMetal_ChangeMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMetal_ChangeMaterial_Statics::NewProp_mat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMetal_ChangeMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMetal_ChangeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMetal, nullptr, "ChangeMaterial", nullptr, nullptr, Z_Construct_UFunction_AMetal_ChangeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMetal_ChangeMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMetal_ChangeMaterial_Statics::Metal_eventChangeMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMetal_ChangeMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMetal_ChangeMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMetal_ChangeMaterial_Statics::Metal_eventChangeMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMetal_ChangeMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMetal_ChangeMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMetal::execChangeMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_mat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeMaterial(Z_Param_mat);
	P_NATIVE_END;
}
// End Class AMetal Function ChangeMaterial

// Begin Class AMetal Function ResetMaterial
struct Z_Construct_UFunction_AMetal_ResetMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Metal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMetal_ResetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMetal, nullptr, "ResetMaterial", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMetal_ResetMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMetal_ResetMaterial_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMetal_ResetMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMetal_ResetMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMetal::execResetMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetMaterial();
	P_NATIVE_END;
}
// End Class AMetal Function ResetMaterial

// Begin Class AMetal
void AMetal::StaticRegisterNativesAMetal()
{
	UClass* Class = AMetal::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeMaterial", &AMetal::execChangeMaterial },
		{ "ResetMaterial", &AMetal::execResetMaterial },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMetal);
UClass* Z_Construct_UClass_AMetal_NoRegister()
{
	return AMetal::StaticClass();
}
struct Z_Construct_UClass_AMetal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Metal.h" },
		{ "ModuleRelativePath", "Metal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//variables .............\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Metal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "variables ............." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Always needs to be defined, if needed will be used, if not, instance or dinamic material will be used.\n" },
#endif
		{ "ModuleRelativePath", "Metal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Always needs to be defined, if needed will be used, if not, instance or dinamic material will be used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceMaterial_MetaData[] = {
		{ "Category", "Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used if it is defined\n" },
#endif
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Metal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used if it is defined" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMeshMaterial_MetaData[] = {
		{ "Category", "Material" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used for temporary materials, use \"Blueprint callable ChangeMaterial(Umaterial mat);\" to define and use this material.\n" },
#endif
		{ "ModuleRelativePath", "Metal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for temporary materials, use \"Blueprint callable ChangeMaterial(Umaterial mat);\" to define and use this material." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstanceMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMeshMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMetal_ChangeMaterial, "ChangeMaterial" }, // 513288660
		{ &Z_Construct_UFunction_AMetal_ResetMaterial, "ResetMaterial" }, // 3443863605
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMetal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMetal_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMetal, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMetal_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMetal, DefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMetal_Statics::NewProp_InstanceMaterial = { "InstanceMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMetal, InstanceMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceMaterial_MetaData), NewProp_InstanceMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMetal_Statics::NewProp_CurrentMeshMaterial = { "CurrentMeshMaterial", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMetal, CurrentMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMeshMaterial_MetaData), NewProp_CurrentMeshMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMetal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMetal_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMetal_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMetal_Statics::NewProp_InstanceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMetal_Statics::NewProp_CurrentMeshMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMetal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMetal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MB_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMetal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMetal_Statics::ClassParams = {
	&AMetal::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMetal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMetal_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMetal_Statics::Class_MetaDataParams), Z_Construct_UClass_AMetal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMetal()
{
	if (!Z_Registration_Info_UClass_AMetal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMetal.OuterSingleton, Z_Construct_UClass_AMetal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMetal.OuterSingleton;
}
template<> MB_PROJECT_API UClass* StaticClass<AMetal>()
{
	return AMetal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMetal);
AMetal::~AMetal() {}
// End Class AMetal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMetal, AMetal::StaticClass, TEXT("AMetal"), &Z_Registration_Info_UClass_AMetal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMetal), 3530431483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h_459473545(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MB_Project_MB_Project_Source_MB_Project_Metal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
