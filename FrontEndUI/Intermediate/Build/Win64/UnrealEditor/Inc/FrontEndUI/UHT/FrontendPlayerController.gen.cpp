// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FrontEndUI/Public/Controllers/FrontendPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontendPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
FRONTENDUI_API UClass* Z_Construct_UClass_AFrontendPlayerController();
FRONTENDUI_API UClass* Z_Construct_UClass_AFrontendPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_FrontEndUI();
// End Cross Module References

// Begin Class AFrontendPlayerController
void AFrontendPlayerController::StaticRegisterNativesAFrontendPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFrontendPlayerController);
UClass* Z_Construct_UClass_AFrontendPlayerController_NoRegister()
{
	return AFrontendPlayerController::StaticClass();
}
struct Z_Construct_UClass_AFrontendPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/FrontendPlayerController.h" },
		{ "ModuleRelativePath", "Public/Controllers/FrontendPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFrontendPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFrontendPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_FrontEndUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFrontendPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFrontendPlayerController_Statics::ClassParams = {
	&AFrontendPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFrontendPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFrontendPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFrontendPlayerController()
{
	if (!Z_Registration_Info_UClass_AFrontendPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFrontendPlayerController.OuterSingleton, Z_Construct_UClass_AFrontendPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFrontendPlayerController.OuterSingleton;
}
template<> FRONTENDUI_API UClass* StaticClass<AFrontendPlayerController>()
{
	return AFrontendPlayerController::StaticClass();
}
AFrontendPlayerController::AFrontendPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFrontendPlayerController);
AFrontendPlayerController::~AFrontendPlayerController() {}
// End Class AFrontendPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Controllers_FrontendPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFrontendPlayerController, AFrontendPlayerController::StaticClass, TEXT("AFrontendPlayerController"), &Z_Registration_Info_UClass_AFrontendPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFrontendPlayerController), 178922568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Controllers_FrontendPlayerController_h_3730236(TEXT("/Script/FrontEndUI"),
	Z_CompiledInDeferFile_FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Controllers_FrontendPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_proj_UE5_common_UI_project_FrontEndUI_Source_FrontEndUI_Public_Controllers_FrontendPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
