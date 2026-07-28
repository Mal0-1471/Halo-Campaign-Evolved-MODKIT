#pragma once
#include "CoreMinimal.h"
#include "Input/CommonBoundActionButtonInterface.h"
#include "HaloUIButtonBase.h"
#include "HaloUIBoundActionButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIBoundActionButton : public UHaloUIButtonBase, public ICommonBoundActionButtonInterface {
    GENERATED_BODY()
public:
    UHaloUIBoundActionButton();

    virtual void SetRepresentedAction(FUIActionBindingHandle InBindingHandle) override;

protected:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateInputAction();
    

    // Fix for true pure virtual functions not being implemented
};

