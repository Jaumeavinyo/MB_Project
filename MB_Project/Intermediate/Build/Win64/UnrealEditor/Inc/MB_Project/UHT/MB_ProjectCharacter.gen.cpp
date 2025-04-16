// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MB_Project/MB_ProjectCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMB_ProjectCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_AMB_ProjectCharacter();
MB_PROJECT_API UClass* Z_Construct_UClass_AMB_ProjectCharacter_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_AMetal_NoRegister();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin Class AMB_ProjectCharacter Function GetSceneMetals
struct Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics
{
	struct MB_ProjectCharacter_eventGetSceneMetals_Parms
	{
		TArray<AMetal*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Allomancy" },
		{ "ModuleRelativePath", "MB_ProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMetal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MB_ProjectCharacter_eventGetSceneMetals_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMB_ProjectCharacter, nullptr, "GetSceneMetals", nullptr, nullptr, Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::MB_ProjectCharacter_eventGetSceneMetals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::MB_ProjectCharacter_eventGetSceneMetals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMB_ProjectCharacter::execGetSceneMetals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AMetal*>*)Z_Param__Result=P_THIS->GetSceneMetals();
	P_NATIVE_END;
}
// End Class AMB_ProjectCharacter Function GetSceneMetals

// Begin Class AMB_ProjectCharacter Function SortMetals
struct Z_Construct_UFunction_AMB_ProjectCharacter_SortMetals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gameplay Logic" },
		{ "ModuleRelativePath", "MB_ProjectCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMB_ProjectCharacter_SortMetals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMB_ProjectCharacter, nullptr, "SortMetals", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMB_ProjectCharacter_SortMetals_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMB_ProjectCharacter_SortMetals_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMB_ProjectCharacter_SortMetals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMB_ProjectCharacter_SortMetals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMB_ProjectCharacter::execSortMetals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortMetals();
	P_NATIVE_END;
}
// End Class AMB_ProjectCharacter Function SortMetals

// Begin Class AMB_ProjectCharacter
void AMB_ProjectCharacter::StaticRegisterNativesAMB_ProjectCharacter()
{
	UClass* Class = AMB_ProjectCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSceneMetals", &AMB_ProjectCharacter::execGetSceneMetals },
		{ "SortMetals", &AMB_ProjectCharacter::execSortMetals },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMB_ProjectCharacter);
UClass* Z_Construct_UClass_AMB_ProjectCharacter_NoRegister()
{
	return AMB_ProjectCharacter::StaticClass();
}
struct Z_Construct_UClass_AMB_ProjectCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MB_ProjectCharacter.h" },
		{ "ModuleRelativePath", "MB_ProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MB_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MB_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "MB_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "MB_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "MB_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "MB_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneMetals_MetaData[] = {
		{ "Category", "Allomancy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//GAMEPLAY VARS AND CODE\n" },
#endif
		{ "ModuleRelativePath", "MB_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GAMEPLAY VARS AND CODE" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneMetals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SceneMetals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMB_ProjectCharacter_GetSceneMetals, "GetSceneMetals" }, // 1732211778
		{ &Z_Construct_UFunction_AMB_ProjectCharacter_SortMetals, "SortMetals" }, // 3564248467
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMB_ProjectCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMB_ProjectCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMB_ProjectCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMB_ProjectCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMB_ProjectCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMB_ProjectCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMB_ProjectCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_SceneMetals_Inner = { "SceneMetals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMetal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_SceneMetals = { "SceneMetals", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMB_ProjectCharacter, SceneMetals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneMetals_MetaData), NewProp_SceneMetals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMB_ProjectCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_SceneMetals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMB_ProjectCharacter_Statics::NewProp_SceneMetals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMB_ProjectCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMB_ProjectCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MB_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMB_ProjectCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMB_ProjectCharacter_Statics::ClassParams = {
	&AMB_ProjectCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMB_ProjectCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMB_ProjectCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMB_ProjectCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMB_ProjectCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMB_ProjectCharacter()
{
	if (!Z_Registration_Info_UClass_AMB_ProjectCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMB_ProjectCharacter.OuterSingleton, Z_Construct_UClass_AMB_ProjectCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMB_ProjectCharacter.OuterSingleton;
}
template<> MB_PROJECT_API UClass* StaticClass<AMB_ProjectCharacter>()
{
	return AMB_ProjectCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMB_ProjectCharacter);
AMB_ProjectCharacter::~AMB_ProjectCharacter() {}
// End Class AMB_ProjectCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMB_ProjectCharacter, AMB_ProjectCharacter::StaticClass, TEXT("AMB_ProjectCharacter"), &Z_Registration_Info_UClass_AMB_ProjectCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMB_ProjectCharacter), 1170757272U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h_3861868934(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_MB_Project_MB_Project_Source_MB_Project_MB_ProjectCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
