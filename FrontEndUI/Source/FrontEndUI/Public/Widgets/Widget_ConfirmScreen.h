// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/Widget_ActivatableBase.h"
#include "FrontendTypes/FrontendEnumTypes.h"
#include "Widget_ConfirmScreen.generated.h"

class UCommonTextBlock;
class UDynamicEntryBox;

USTRUCT(BlueprintType)
struct FConfirmScreenButtonInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EConfirmScreenButtonType  ConfirmScreenButtonType = EConfirmScreenButtonType ::Unknown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ButtonTextToDisplay;
};


UCLASS()
class FRONTENDUI_API UConfirmScreenInfoObject : public UObject
{
	GENERATED_BODY()

public:
	static UConfirmScreenInfoObject* CreateOKScreen( const FText& InScreenTitle, const FText& InScreenMsg);
	static UConfirmScreenInfoObject* CreateYesNoScreen( const FText& InScreenTitle, const FText& InScreenMsg);
	static UConfirmScreenInfoObject* CreateOKCancelScreen( const FText& InScreenTitle, const FText& InScreenMsg);

	UPROPERTY(Transient)
	FText ScreenTitle;

	UPROPERTY(Transient)
	FText ScreenMsg;

	UPROPERTY(Transient)
	TArray<FConfirmScreenButtonInfo> AvailableScreenButtons;
};



/**
 * 
 */
UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class FRONTENDUI_API UWidget_ConfirmScreen : public UWidget_ActivatableBase
{
	GENERATED_BODY()

public:
	//Gets called outside of the class when this widget is constructd and before ites pusehed to the modal stack
	void InitConfirmScreen(UConfirmScreenInfoObject* InScreenInfoObject, TFunction<void(EConfirmScreenButtonType)> ClickedButtonCallback);
	
private:
	UPROPERTY(meta = (BindWidget))
	UCommonTextBlock* CommonTextBlock_Title;
	
	UPROPERTY(meta = (BindWidget))
	UCommonTextBlock* CommonTextBlock_Message;
	
	UPROPERTY(meta = (BindWidget))
	UDynamicEntryBox* DynamicEntryBox_Buttons;
	
};
