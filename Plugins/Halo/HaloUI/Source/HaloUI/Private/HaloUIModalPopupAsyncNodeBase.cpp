#include "HaloUIModalPopupAsyncNodeBase.h"

UHaloUIModalPopupAsyncNodeBase::UHaloUIModalPopupAsyncNodeBase() {
    this->ResultingWidget = NULL;
    this->WorldContextObject = NULL;
    this->TargetLocalPlayer = NULL;
    this->PopupInitData = NULL;
    this->Result = EHaloUIModalPopupResult::Unknown;
    this->bHasResult = false;
    this->bHasBeenActivated = false;
}

bool UHaloUIModalPopupAsyncNodeBase::HasResult() const {
    return false;
}

void UHaloUIModalPopupAsyncNodeBase::HandleHaloUIModalPopupResult(EHaloUIModalPopupResult InPopupResult, UHaloUIModalPopupWidgetBase* PopupWidget) {
}

EHaloUIModalPopupResult UHaloUIModalPopupAsyncNodeBase::GetResult() const {
    return EHaloUIModalPopupResult::Completed;
}

UHaloUIModalPopupAsyncNodeBase* UHaloUIModalPopupAsyncNodeBase::CreatePopupWidgetByType(TSoftClassPtr<UHaloUIModalPopupWidgetBase> PopupClass, FGameplayTag PopupLayer, UObject* InWorldContextObject, FText Title, FText Message, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated, bool ShouldBeHighPriority, FText Button1Text, FText Button2Text, FText Button3Text, FText Button4Text, int32 DefaultButtonIdx, EHaloUIDialogButtonSelection BackoutButtonIdx) {
    return NULL;
}

void UHaloUIModalPopupAsyncNodeBase::CreatePopupWidget(TSoftClassPtr<UHaloUIModalPopupWidgetBase> PopupClass, FGameplayTag PopupLayer, UObject* InWorldContextObject, FText Title, FText Message, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated, bool ShouldBeHighPriority, FText Button1Text, FText Button2Text, FText Button3Text, FText Button4Text, int32 DefaultButtonIdx, EHaloUIDialogButtonSelection BackoutButtonIdx) {
}

UHaloUIModalPopupAsyncNodeBase* UHaloUIModalPopupAsyncNodeBase::CreateHaloUIPopupByInitDataWithTargetPlayer(UObject* InWorldContextObject, FGameplayTag PopupLayer, UHaloUIPopupInitData* InitData, ULocalPlayer* NewTargetLocalPlayer, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated) {
    return NULL;
}

UHaloUIModalPopupAsyncNodeBase* UHaloUIModalPopupAsyncNodeBase::CreateHaloUIPopupByInitData(UObject* InWorldContextObject, FGameplayTag PopupLayer, UHaloUIPopupInitData* InitData, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated) {
    return NULL;
}

UHaloUIModalPopupAsyncNodeBase* UHaloUIModalPopupAsyncNodeBase::CreateHaloUIInProgressWidget(TSoftClassPtr<UHaloUIModalInProgressWidget> InProgressClass, FGameplayTag PopupLayer, UObject* InWorldContextObject, FText Title, FText Message, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated) {
    return NULL;
}

UHaloUIModalPopupAsyncNodeBase* UHaloUIModalPopupAsyncNodeBase::CreateHaloUIDialogWidget(TSoftClassPtr<UHaloUIModalDialogPopupWidget> DialogClass, FGameplayTag PopupLayer, UObject* InWorldContextObject, FText Title, FText Message, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated, FText Button1Text, FText Button2Text, FText Button3Text, FText Button4Text, int32 DefaultButtonIdx, EHaloUIDialogButtonSelection BackoutButtonIdx) {
    return NULL;
}

UHaloUIModalPopupAsyncNodeBase* UHaloUIModalPopupAsyncNodeBase::CreateHaloUIAlertWidget(TSoftClassPtr<UHaloUIModalAlertPopupWidget> AlertClass, FGameplayTag PopupLayer, UObject* InWorldContextObject, FText Title, FText Message, const FHaloUIModalPopupCreatedSignature& OnWidgetCreated, bool ShouldBeHighPriority) {
    return NULL;
}


