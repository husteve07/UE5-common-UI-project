// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Controllers/FrontendPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRONTENDUI_FrontendPlayerController_generated_h
#error "FrontendPlayerController.generated.h already included, missing '#pragma once' in FrontendPlayerController.h"
#endif
#define FRONTENDUI_FrontendPlayerController_generated_h

#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Controllers_FrontendPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFrontendPlayerController(); \
	friend struct Z_Construct_UClass_AFrontendPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFrontendPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FrontEndUI"), NO_API) \
	DECLARE_SERIALIZER(AFrontendPlayerController)


#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Controllers_FrontendPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFrontendPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFrontendPlayerController(AFrontendPlayerController&&); \
	AFrontendPlayerController(const AFrontendPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFrontendPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFrontendPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFrontendPlayerController) \
	NO_API virtual ~AFrontendPlayerController();


#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Controllers_FrontendPlayerController_h_12_PROLOG
#define FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Controllers_FrontendPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Controllers_FrontendPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Controllers_FrontendPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRONTENDUI_API UClass* StaticClass<class AFrontendPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Controllers_FrontendPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
