// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontEndUI/Public/Widgets/Widget_PrimaryLayout.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidget_PrimaryLayout() {}

// Begin Cross Module References
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister();
COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
FRONTENDUI_API UClass* Z_Construct_UClass_UWidget_PrimaryLayout();
FRONTENDUI_API UClass* Z_Construct_UClass_UWidget_PrimaryLayout_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FrontEndUI();
// End Cross Module References

// Begin Class UWidget_PrimaryLayout Function RegisterWidgetStack
struct Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics
{
	struct Widget_PrimaryLayout_eventRegisterWidgetStack_Parms
	{
		FGameplayTag InStackTag;
		UCommonActivatableWidgetContainerBase* InStack;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/Widget_PrimaryLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStackTag_MetaData[] = {
		{ "Categories", "Frontend.WidgetStack" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InStack_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InStackTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::NewProp_InStackTag = { "InStackTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_PrimaryLayout_eventRegisterWidgetStack_Parms, InStackTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStackTag_MetaData), NewProp_InStackTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::NewProp_InStack = { "InStack", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Widget_PrimaryLayout_eventRegisterWidgetStack_Parms, InStack), Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InStack_MetaData), NewProp_InStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::NewProp_InStackTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::NewProp_InStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidget_PrimaryLayout, nullptr, "RegisterWidgetStack", nullptr, nullptr, Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::Widget_PrimaryLayout_eventRegisterWidgetStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::Widget_PrimaryLayout_eventRegisterWidgetStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWidget_PrimaryLayout::execRegisterWidgetStack)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InStackTag);
	P_GET_OBJECT(UCommonActivatableWidgetContainerBase,Z_Param_InStack);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterWidgetStack(Z_Param_InStackTag,Z_Param_InStack);
	P_NATIVE_END;
}
// End Class UWidget_PrimaryLayout Function RegisterWidgetStack

// Begin Class UWidget_PrimaryLayout
void UWidget_PrimaryLayout::StaticRegisterNativesUWidget_PrimaryLayout()
{
	UClass* Class = UWidget_PrimaryLayout::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterWidgetStack", &UWidget_PrimaryLayout::execRegisterWidgetStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidget_PrimaryLayout);
UClass* Z_Construct_UClass_UWidget_PrimaryLayout_NoRegister()
{
	return UWidget_PrimaryLayout::StaticClass();
}
struct Z_Construct_UClass_UWidget_PrimaryLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisableNaiveTick", "" },
		{ "IncludePath", "Widgets/Widget_PrimaryLayout.h" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_PrimaryLayout.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredWidgetStackMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Widget_PrimaryLayout.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredWidgetStackMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredWidgetStackMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredWidgetStackMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidget_PrimaryLayout_RegisterWidgetStack, "RegisterWidgetStack" }, // 342354833
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidget_PrimaryLayout>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap_ValueProp = { "RegisteredWidgetStackMap", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCommonActivatableWidgetContainerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap_Key_KeyProp = { "RegisteredWidgetStackMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap = { "RegisteredWidgetStackMap", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWidget_PrimaryLayout, RegisteredWidgetStackMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredWidgetStackMap_MetaData), NewProp_RegisteredWidgetStackMap_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidget_PrimaryLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidget_PrimaryLayout_Statics::NewProp_RegisteredWidgetStackMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWidget_PrimaryLayout_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontEndUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidget_PrimaryLayout_Statics::ClassParams = {
	&UWidget_PrimaryLayout::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWidget_PrimaryLayout_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidget_PrimaryLayout_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidget_PrimaryLayout_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidget_PrimaryLayout()
{
	if (!Z_Registration_Info_UClass_UWidget_PrimaryLayout.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidget_PrimaryLayout.OuterSingleton, Z_Construct_UClass_UWidget_PrimaryLayout_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidget_PrimaryLayout.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<UWidget_PrimaryLayout>()
{
	return UWidget_PrimaryLayout::StaticClass();
}
UWidget_PrimaryLayout::UWidget_PrimaryLayout(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidget_PrimaryLayout);
UWidget_PrimaryLayout::~UWidget_PrimaryLayout() {}
// End Class UWidget_PrimaryLayout

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidget_PrimaryLayout, UWidget_PrimaryLayout::StaticClass, TEXT("UWidget_PrimaryLayout"), &Z_Registration_Info_UClass_UWidget_PrimaryLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidget_PrimaryLayout), 2386956844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h_3007770207(TEXT("/Script/FrontEndUI"),
	Z_CompiledInDeferFile_FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
