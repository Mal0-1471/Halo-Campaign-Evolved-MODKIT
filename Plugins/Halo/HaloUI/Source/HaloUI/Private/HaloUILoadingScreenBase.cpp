#include "HaloUILoadingScreenBase.h"

UHaloUILoadingScreenBase::UHaloUILoadingScreenBase() {
    this->AnimationStartTime = 0.00f;
    this->AnimationLoopTime = 3.00f;
    this->bShowDefaultThrobber = true;
}

float UHaloUILoadingScreenBase::GetSlateGetAnimationTime() const {
    return 0.0f;
}

void UHaloUILoadingScreenBase::BP_SlateTick_Implementation(float InTime) {
}


