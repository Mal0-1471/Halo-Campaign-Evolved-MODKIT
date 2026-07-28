#pragma once
#include "CoreMinimal.h"
#include "HaloUIModalPopupWidgetBase.h"
#include "HaloUIModalDialogPopupWidget.generated.h"

class UCommonButtonBase;
class UHaloUIButtonContainer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIModalDialogPopupWidget : public UHaloUIModalPopupWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUIButtonContainer* ButtonContainer;
    
public:
    UHaloUIModalDialogPopupWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleButtonPressed(UCommonButtonBase* OwningButton);
    
};

