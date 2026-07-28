#include "BlamVehicleHumanTankComponent.h"

UBlamVehicleHumanTankComponent::UBlamVehicleHumanTankComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UBlamVehicleHumanTankComponent::IsStopped() const {
    return false;
}

float UBlamVehicleHumanTankComponent::GetTreadGrind() const {
    return 0.0f;
}

FBlamHumanTankTread UBlamVehicleHumanTankComponent::GetTread(EBlamVehicleHumanTankTread TreadIndex) const {
    return FBlamHumanTankTread{};
}

float UBlamVehicleHumanTankComponent::GetEngineRPM() const {
    return 0.0f;
}


