#include "BlamVehicleHumanJeepComponent.h"

UBlamVehicleHumanJeepComponent::UBlamVehicleHumanJeepComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UBlamVehicleHumanJeepComponent::IsEmergencyBraking() const {
    return false;
}

bool UBlamVehicleHumanJeepComponent::IsBraking() const {
    return false;
}

float UBlamVehicleHumanJeepComponent::GetSteering() const {
    return 0.0f;
}

float UBlamVehicleHumanJeepComponent::GetEngineRPM() const {
    return 0.0f;
}

float UBlamVehicleHumanJeepComponent::GetEngineCruising() const {
    return 0.0f;
}

float UBlamVehicleHumanJeepComponent::GetEngineAngularVelocityFraction() const {
    return 0.0f;
}

FBlamHumanJeepAxle UBlamVehicleHumanJeepComponent::GetAxle(EBlamVehicleHumanJeepAxle AxleIndex) const {
    return FBlamHumanJeepAxle{};
}


