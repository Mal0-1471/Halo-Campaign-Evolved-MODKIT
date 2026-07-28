#include "BlamVehicleComponent.h"

UBlamVehicleComponent::UBlamVehicleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VehicleUIDataAsset = NULL;
    this->bShowStateInHud = false;
}

bool UBlamVehicleComponent::IsTricking() const {
    return false;
}

bool UBlamVehicleComponent::IsAirborne() const {
    return false;
}

bool UBlamVehicleComponent::HasImpactDataForFrictionPoint(int32 FrictionPointIndex) const {
    return false;
}

float UBlamVehicleComponent::GetVelocityMagnitude() const {
    return 0.0f;
}

int32 UBlamVehicleComponent::GetPrimaryGunObjectDatumIndex() const {
    return 0;
}

float UBlamVehicleComponent::GetNormalizedRoll() const {
    return 0.0f;
}

FBlamVehicleImpactData UBlamVehicleComponent::GetImpactDataForFrictionPoint(int32 FrictionPointIndex) const {
    return FBlamVehicleImpactData{};
}


