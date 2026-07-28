#include "BlamVehicleHumanPlaneComponent.h"

UBlamVehicleHumanPlaneComponent::UBlamVehicleHumanPlaneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float UBlamVehicleHumanPlaneComponent::GetTurnAbsolute() const {
    return 0.0f;
}

float UBlamVehicleHumanPlaneComponent::GetThrust() const {
    return 0.0f;
}

float UBlamVehicleHumanPlaneComponent::GetHover() const {
    return 0.0f;
}

float UBlamVehicleHumanPlaneComponent::GetEngineRPM() const {
    return 0.0f;
}


