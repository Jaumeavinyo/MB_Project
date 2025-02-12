// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MB_Project/AllomancyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAllomancyComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomancyComponent();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomancyComponent_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticAbility_NoRegister();
MB_PROJECT_API UClass* Z_Construct_UClass_UAllomanticMetal_NoRegister();
UPackage* Z_Construct_UPackage__Script_MB_Project();
// End Cross Module References

// Begin Class UAllomancyComponent Function consumeAllomanticMetal
struct Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics
{
	struct AllomancyComponent_eventconsumeAllomanticMetal_Parms
	{
		UAllomanticMetal* metal;
		int32 ammount;
		UEdGraph* consumptionGraph;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Allomancy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//for blueprint calls, public use, gameplay programming\n" },
#endif
		{ "ModuleRelativePath", "AllomancyComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "for blueprint calls, public use, gameplay programming" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_metal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ammount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_consumptionGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::NewProp_metal = { "metal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AllomancyComponent_eventconsumeAllomanticMetal_Parms, metal), Z_Construct_UClass_UAllomanticMetal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::NewProp_ammount = { "ammount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AllomancyComponent_eventconsumeAllomanticMetal_Parms, ammount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::NewProp_consumptionGraph = { "consumptionGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AllomancyComponent_eventconsumeAllomanticMetal_Parms, consumptionGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::NewProp_metal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::NewProp_ammount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::NewProp_consumptionGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAllomancyComponent, nullptr, "consumeAllomanticMetal", nullptr, nullptr, Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::AllomancyComponent_eventconsumeAllomanticMetal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::AllomancyComponent_eventconsumeAllomanticMetal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAllomancyComponent::execconsumeAllomanticMetal)
{
	P_GET_OBJECT(UAllomanticMetal,Z_Param_metal);
	P_GET_PROPERTY(FIntProperty,Z_Param_ammount);
	P_GET_OBJECT(UEdGraph,Z_Param_consumptionGraph);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->consumeAllomanticMetal(Z_Param_metal,Z_Param_ammount,Z_Param_consumptionGraph);
	P_NATIVE_END;
}
// End Class UAllomancyComponent Function consumeAllomanticMetal

// Begin Class UAllomancyComponent
void UAllomancyComponent::StaticRegisterNativesUAllomancyComponent()
{
	UClass* Class = UAllomancyComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "consumeAllomanticMetal", &UAllomancyComponent::execconsumeAllomanticMetal },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAllomancyComponent);
UClass* Z_Construct_UClass_UAllomancyComponent_NoRegister()
{
	return UAllomancyComponent::StaticClass();
}
struct Z_Construct_UClass_UAllomancyComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AllomancyComponent.h" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveAbilities_MetaData[] = {
		{ "Category", "Allomancy" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllomanticMetals_MetaData[] = {
		{ "Category", "Allomancy" },
		{ "ModuleRelativePath", "AllomancyComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveAbilities_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveAbilities_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveAbilities;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllomanticMetals_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllomanticMetals_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllomanticMetals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAllomancyComponent_consumeAllomanticMetal, "consumeAllomanticMetal" }, // 4280032080
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAllomancyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_ActiveAbilities_ValueProp = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAllomanticAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_ActiveAbilities_Key_KeyProp = { "ActiveAbilities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_ActiveAbilities = { "ActiveAbilities", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, ActiveAbilities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveAbilities_MetaData), NewProp_ActiveAbilities_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals_ValueProp = { "AllomanticMetals", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals_Key_KeyProp = { "AllomanticMetals_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAllomanticMetal_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals = { "AllomanticMetals", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAllomancyComponent, AllomanticMetals), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllomanticMetals_MetaData), NewProp_AllomanticMetals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAllomancyComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_ActiveAbilities_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_ActiveAbilities_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_ActiveAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAllomancyComponent_Statics::NewProp_AllomanticMetals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomancyComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAllomancyComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MB_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomancyComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAllomancyComponent_Statics::ClassParams = {
	&UAllomancyComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAllomancyComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAllomancyComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAllomancyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAllomancyComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAllomancyComponent()
{
	if (!Z_Registration_Info_UClass_UAllomancyComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAllomancyComponent.OuterSingleton, Z_Construct_UClass_UAllomancyComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAllomancyComponent.OuterSingleton;
}
template<> MB_PROJECT_API UClass* StaticClass<UAllomancyComponent>()
{
	return UAllomancyComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAllomancyComponent);
UAllomancyComponent::~UAllomancyComponent() {}
// End Class UAllomancyComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAllomancyComponent, UAllomancyComponent::StaticClass, TEXT("UAllomancyComponent"), &Z_Registration_Info_UClass_UAllomancyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAllomancyComponent), 4247345676U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_269463286(TEXT("/Script/MB_Project"),
	Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_jauma_Documents_GitHub_MistBornUE5_Misborn_Prototype_MB_Project_MB_Project_Source_MB_Project_AllomancyComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
