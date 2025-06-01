// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontEndUI/Public/Subsystems/FrontendUISubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontendUISubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendUISubsystem();
FRONTENDUI_API UClass* Z_Construct_UClass_UFrontendUISubsystem_NoRegister();
FRONTENDUI_API UClass* Z_Construct_UClass_UWidget_PrimaryLayout_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontEndUI();
// End Cross Module References

// Begin Class UFrontendUISubsystem Function RegisterCreatedPrimaryLayoutWidget
struct Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics
{
	struct FrontendUISubsystem_eventRegisterCreatedPrimaryLayoutWidget_Parms
	{
		UWidget_PrimaryLayout* InCreatedWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Subsystems/FrontendUISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCreatedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCreatedWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::NewProp_InCreatedWidget = { "InCreatedWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontendUISubsystem_eventRegisterCreatedPrimaryLayoutWidget_Parms, InCreatedWidget), Z_Construct_UClass_UWidget_PrimaryLayout_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCreatedWidget_MetaData), NewProp_InCreatedWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::NewProp_InCreatedWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontendUISubsystem, nullptr, "RegisterCreatedPrimaryLayoutWidget", nullptr, nullptr, Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::FrontendUISubsystem_eventRegisterCreatedPrimaryLayoutWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::FrontendUISubsystem_eventRegisterCreatedPrimaryLayoutWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFrontendUISubsystem::execRegisterCreatedPrimaryLayoutWidget)
{
	P_GET_OBJECT(UWidget_PrimaryLayout,Z_Param_InCreatedWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterCreatedPrimaryLayoutWidget(Z_Param_InCreatedWidget);
	P_NATIVE_END;
}
// End Class UFrontendUISubsystem Function RegisterCreatedPrimaryLayoutWidget

// Begin Class UFrontendUISubsystem
void UFrontendUISubsystem::StaticRegisterNativesUFrontendUISubsystem()
{
	UClass* Class = UFrontendUISubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterCreatedPrimaryLayoutWidget", &UFrontendUISubsystem::execRegisterCreatedPrimaryLayoutWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFrontendUISubsystem);
UClass* Z_Construct_UClass_UFrontendUISubsystem_NoRegister()
{
	return UFrontendUISubsystem::StaticClass();
}
struct Z_Construct_UClass_UFrontendUISubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Subsystems/FrontendUISubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/FrontendUISubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreatedPrimaryLayout_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Subsystems/FrontendUISubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CreatedPrimaryLayout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFrontendUISubsystem_RegisterCreatedPrimaryLayoutWidget, "RegisterCreatedPrimaryLayoutWidget" }, // 1372904716
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontendUISubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontendUISubsystem_Statics::NewProp_CreatedPrimaryLayout = { "CreatedPrimaryLayout", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontendUISubsystem, CreatedPrimaryLayout), Z_Construct_UClass_UWidget_PrimaryLayout_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreatedPrimaryLayout_MetaData), NewProp_CreatedPrimaryLayout_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontendUISubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontendUISubsystem_Statics::NewProp_CreatedPrimaryLayout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendUISubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFrontendUISubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontEndUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendUISubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontendUISubsystem_Statics::ClassParams = {
	&UFrontendUISubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFrontendUISubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendUISubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontendUISubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontendUISubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFrontendUISubsystem()
{
	if (!Z_Registration_Info_UClass_UFrontendUISubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontendUISubsystem.OuterSingleton, Z_Construct_UClass_UFrontendUISubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFrontendUISubsystem.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UFrontendUISubsystem>()
{
	return UFrontendUISubsystem::StaticClass();
}
UFrontendUISubsystem::UFrontendUISubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontendUISubsystem);
UFrontendUISubsystem::~UFrontendUISubsystem() {}
// End Class UFrontendUISubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Subsystems_FrontendUISubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFrontendUISubsystem, UFrontendUISubsystem::StaticClass, TEXT("UFrontendUISubsystem"), &Z_Registration_Info_UClass_UFrontendUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontendUISubsystem), 4087273361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Subsystems_FrontendUISubsystem_h_1265757198(TEXT("/Script/FrontEndUI"),
	Z_CompiledInDeferFile_FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Subsystems_FrontendUISubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Subsystems_FrontendUISubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
