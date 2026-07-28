#include "HaloUIHudVisibilityTester.h"

UHaloUIHudVisibilityTester::UHaloUIHudVisibilityTester() {
    this->HudVisibilityObject = NULL;
}

bool UHaloUIHudVisibilityTester::SyncVisibility(UHaloUIHudVisibility* HudVisibility) {
    return false;
}

void UHaloUIHudVisibilityTester::OnHudStatesChanged(FGameplayTagContainer ActiveStates) {
}

void UHaloUIHudVisibilityTester::OnHudElementVisibilityChanged(FGameplayTag HudElementTag, bool bVisible) {
}

bool UHaloUIHudVisibilityTester::GetIsVisible() const {
    return false;
}


