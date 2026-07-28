#include "HaloUILayoutBase.h"

UHaloUILayoutBase::UHaloUILayoutBase() {
    this->bAutoActivate = true;
    this->bSupportsActivationFocus = false;
}

void UHaloUILayoutBase::RegisterLayer(FGameplayTag LayerTag, UCommonActivatableWidgetContainerBase* LayerWidget) {
}


