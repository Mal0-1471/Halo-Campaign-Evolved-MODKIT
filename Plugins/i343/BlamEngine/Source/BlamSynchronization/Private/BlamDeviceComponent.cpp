#include "BlamDeviceComponent.h"

UBlamDeviceComponent::UBlamDeviceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UBlamDeviceComponent::IsPositionFractionReversed() const {
    return false;
}

bool UBlamDeviceComponent::IsNotUsableFromAnySide() const {
    return false;
}

float UBlamDeviceComponent::GetPowerFraction() const {
    return 0.0f;
}

float UBlamDeviceComponent::GetPositionFractionPlaybackRatio() const {
    return 0.0f;
}

float UBlamDeviceComponent::GetPositionFraction() const {
    return 0.0f;
}

float UBlamDeviceComponent::GetChangeInPowerFraction() const {
    return 0.0f;
}

float UBlamDeviceComponent::GetChangeInPositionFraction() const {
    return 0.0f;
}


