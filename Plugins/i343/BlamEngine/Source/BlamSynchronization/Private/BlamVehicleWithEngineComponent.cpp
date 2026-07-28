#include "BlamVehicleWithEngineComponent.h"

UBlamVehicleWithEngineComponent::UBlamVehicleWithEngineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 UBlamVehicleWithEngineComponent::GetGearCount() const {
    return 0;
}

EBlamVehicleGear UBlamVehicleWithEngineComponent::GetGear() const {
    return EBlamVehicleGear::Reverse;
}


