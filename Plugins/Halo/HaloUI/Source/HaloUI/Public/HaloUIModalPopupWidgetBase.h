#pragma once
#include "CoreMinimal.h"
#include "EHaloUIModalPopupResult.h"
#include "EHaloUIModalPopupType.h"
#include "HaloUIActivatableWidget.h"
#include "HaloUIModalPopupWidgetBase.generated.h"

class UHaloUIModalPopupAsyncNodeBase;
class UHaloUIPopupInitData;
class UHaloUITextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIModalPopupWidgetBase : public UHaloUIActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUITextBlock* Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUITextBlock* Message;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloUIModalPopupAsyncNodeBase* AsyncPopupAction;
    
public:
    UHaloUIModalPopupWidgetBase();

    UFUNCTION(BlueprintCallable)
    void PopupAction(EHaloUIModalPopupResult InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializePopup(const UHaloUIPopupInitData* InitData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHaloUIModalPopupType GetPopupType() const;
    
};

