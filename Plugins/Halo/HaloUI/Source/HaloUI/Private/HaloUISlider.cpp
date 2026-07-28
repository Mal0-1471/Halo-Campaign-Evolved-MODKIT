#include "HaloUISlider.h"
#include "Templates/SubclassOf.h"

UHaloUISlider::UHaloUISlider() {
    this->IncreaseSound = NULL;
    this->DecreaseSound = NULL;
    this->DeniedSound = NULL;
}

void UHaloUISlider::SetValueWithBroadcast(float InValue, bool bBroadcast) {
}

void UHaloUISlider::SetIncreaseSoundOverride(const FHaloUIOptionalSound& Override) {
}

void UHaloUISlider::SetHaloUISliderStyle(TSubclassOf<UHaloUISliderStyle>& SliderStyle) {
}

void UHaloUISlider::SetDeniedSoundOverride(const FHaloUIOptionalSound& Override) {
}

void UHaloUISlider::SetDecreaseSoundOverride(const FHaloUIOptionalSound& Override) {
}

void UHaloUISlider::PlaySliderSound(bool bIncrease) {
}


