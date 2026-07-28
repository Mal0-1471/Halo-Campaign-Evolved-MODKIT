#include "BlamVehicleFighterComponent.h"

UBlamVehicleFighterComponent::UBlamVehicleFighterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float UBlamVehicleFighterComponent::GetWingtipContrail() const {
    return 0.0f;
}

float UBlamVehicleFighterComponent::GetThrust() const {
    return 0.0f;
}

float UBlamVehicleFighterComponent::GetSteering() const {
    return 0.0f;
}

float UBlamVehicleFighterComponent::GetEngineRPM() const {
    return 0.0f;
}


