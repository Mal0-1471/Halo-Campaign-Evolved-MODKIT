#include "BlamDeviceControlComponent.h"

UBlamDeviceControlComponent::UBlamDeviceControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UBlamDeviceControlComponent::IsHealthStationWithInfiniteCharges() const {
    return false;
}

bool UBlamDeviceControlComponent::IsHealthStationInUse() const {
    return false;
}

bool UBlamDeviceControlComponent::HasEverToggled() const {
    return false;
}

bool UBlamDeviceControlComponent::GetTogglePosition() const {
    return false;
}

int32 UBlamDeviceControlComponent::GetHealthStationChargesRemaining() const {
    return 0;
}

EBlamDeviceControlType UBlamDeviceControlComponent::GetDeviceControlType() const {
    return EBlamDeviceControlType::ToggleSwitch;
}


