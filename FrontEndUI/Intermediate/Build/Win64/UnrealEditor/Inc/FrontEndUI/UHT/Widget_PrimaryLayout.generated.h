// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Widget_PrimaryLayout.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCommonActivatableWidgetContainerBase;
struct FGameplayTag;
#ifdef FRONTENDUI_Widget_PrimaryLayout_generated_h
#error "Widget_PrimaryLayout.generated.h already included, missing '#pragma once' in Widget_PrimaryLayout.h"
#endif
#define FRONTENDUI_Widget_PrimaryLayout_generated_h

#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegisterWidgetStack);


#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidget_PrimaryLayout(); \
	friend struct Z_Construct_UClass_UWidget_PrimaryLayout_Statics; \
public: \
	DECLARE_CLASS(UWidget_PrimaryLayout, UCommonUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FrontEndUI"), NO_API) \
	DECLARE_SERIALIZER(UWidget_PrimaryLayout)


#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidget_PrimaryLayout(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWidget_PrimaryLayout(UWidget_PrimaryLayout&&); \
	UWidget_PrimaryLayout(const UWidget_PrimaryLayout&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidget_PrimaryLayout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidget_PrimaryLayout); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidget_PrimaryLayout) \
	NO_API virtual ~UWidget_PrimaryLayout();


#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h_15_PROLOG
#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class UWidget_PrimaryLayout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Widgets_Widget_PrimaryLayout_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
