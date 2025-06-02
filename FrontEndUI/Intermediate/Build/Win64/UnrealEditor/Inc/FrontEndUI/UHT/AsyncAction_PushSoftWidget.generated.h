// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActions/AsyncAction_PushSoftWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UAsyncAction_PushSoftWidget;
class UObject;
class UWidget_ActivatableBase;
struct FGameplayTag;
#ifdef FRONTENDUI_AsyncAction_PushSoftWidget_generated_h
#error "AsyncAction_PushSoftWidget.generated.h already included, missing '#pragma once' in AsyncAction_PushSoftWidget.h"
#endif
#define FRONTENDUI_AsyncAction_PushSoftWidget_generated_h

#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_12_DELEGATE \
FRONTENDUI_API void FOnPushSoftWidgetDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPushSoftWidgetDelegate, UWidget_ActivatableBase* PushedWidget);


#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPushSoftWidget);


#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_PushSoftWidget(); \
	friend struct Z_Construct_UClass_UAsyncAction_PushSoftWidget_Statics; \
public: \
	DECLARE_CLASS(UAsyncAction_PushSoftWidget, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FrontEndUI"), NO_API) \
	DECLARE_SERIALIZER(UAsyncAction_PushSoftWidget)


#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_PushSoftWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncAction_PushSoftWidget(UAsyncAction_PushSoftWidget&&); \
	UAsyncAction_PushSoftWidget(const UAsyncAction_PushSoftWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_PushSoftWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_PushSoftWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_PushSoftWidget) \
	NO_API virtual ~UAsyncAction_PushSoftWidget();


#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_16_PROLOG
#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_AsyncActions_AsyncAction_PushSoftWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class UAsyncAction_PushSoftWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_AsyncActions_AsyncAction_PushSoftWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
