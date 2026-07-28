#include "BlamEquipmentComponent.h"

UBlamEquipmentComponent::UBlamEquipmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EquipmentDataAsset = NULL;
}

bool UBlamEquipmentComponent::SuppressesWeaponUsage() const {
    return false;
}

bool UBlamEquipmentComponent::SuppressesMelee() const {
    return false;
}

bool UBlamEquipmentComponent::SuppressesGrenadeUsage() const {
    return false;
}

bool UBlamEquipmentComponent::SuppressesDeviceInteraction() const {
    return false;
}

bool UBlamEquipmentComponent::SuppessesAllActions() const {
    return false;
}

bool UBlamEquipmentComponent::IsWarmingUp() const {
    return false;
}

bool UBlamEquipmentComponent::IsOn() const {
    return false;
}

bool UBlamEquipmentComponent::IsIntrinsic() const {
    return false;
}

float UBlamEquipmentComponent::GetStrength() const {
    return 0.0f;
}

float UBlamEquipmentComponent::GetSecondsSinceActivation() const {
    return 0.0f;
}

float UBlamEquipmentComponent::GetEnergyBurned() const {
    return 0.0f;
}

float UBlamEquipmentComponent::GetEnergy() const {
    return 0.0f;
}

int32 UBlamEquipmentComponent::GetChargesRemaining() const {
    return 0;
}

float UBlamEquipmentComponent::GetActiveFraction() const {
    return 0.0f;
}

bool UBlamEquipmentComponent::DesiresThirdPersonCamera() const {
    return false;
}

bool UBlamEquipmentComponent::DesiresSoundDucking() const {
    return false;
}

bool UBlamEquipmentComponent::DesiresHiddenReticle() const {
    return false;
}

bool UBlamEquipmentComponent::CanNotBePickedUpByPlayer() const {
    return false;
}

bool UBlamEquipmentComponent::BlocksTracking() const {
    return false;
}


