#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "HaloUIUserWidget.h"
#include "OnPageSwitchedEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "HaloUINavBarWidget.generated.h"

class UCommonActivatableWidgetSwitcher;
class UCommonButtonBase;
class UCommonButtonGroupBase;
class UCommonButtonStyle;
class UHaloUIButtonBase;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUINavBarWidget : public UHaloUIUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHaloUIButtonBase> ButtonWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ButtonPadding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPageSwitchedEvent OnPageSwitchedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> BeforeButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> ActiveButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButtonStyle> AfterButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupBase* ButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetSwitcher* PageSwitcher;
    
public:
    UHaloUINavBarWidget();

    UFUNCTION(BlueprintCallable)
    void InitPagesAndButtons(UCommonActivatableWidgetSwitcher* WidgetSwitcher);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePageChanged(UWidget* Widget, int32 PageIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked(UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetSelectedButton() const;
    
};

