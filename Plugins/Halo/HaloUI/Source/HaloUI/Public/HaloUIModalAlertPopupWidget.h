#pragma once
#include "CoreMinimal.h"
#include "HaloUIModalPopupWidgetBase.h"
#include "HaloUIModalAlertPopupWidget.generated.h"

class UCommonButtonBase;
class UHaloUIButtonBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIModalAlertPopupWidget : public UHaloUIModalPopupWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUIButtonBase* Button;
    
    UHaloUIModalAlertPopupWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPriority() const;
    
    UFUNCTION(BlueprintCallable)
    void ButtonActivatedResponse(UCommonButtonBase* NewButton);
    
};

