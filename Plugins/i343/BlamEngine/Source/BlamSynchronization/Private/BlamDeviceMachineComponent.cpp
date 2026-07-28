#include "BlamDeviceMachineComponent.h"

UBlamDeviceMachineComponent::UBlamDeviceMachineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UBlamDeviceMachineComponent::NeverAppearsLocked() const {
    return false;
}

bool UBlamDeviceMachineComponent::IsShielded() const {
    return false;
}

bool UBlamDeviceMachineComponent::IsOpenedByMeleeAttack() const {
    return false;
}

bool UBlamDeviceMachineComponent::IsOneSidedForPlayer() const {
    return false;
}

bool UBlamDeviceMachineComponent::IsOneSided() const {
    return false;
}

bool UBlamDeviceMachineComponent::IsInMotion() const {
    return false;
}

EBlamDeviceMachineType UBlamDeviceMachineComponent::GetDeviceMachineType() const {
    return EBlamDeviceMachineType::Door;
}

bool UBlamDeviceMachineComponent::DoesNotOperateAutomatically() const {
    return false;
}

bool UBlamDeviceMachineComponent::DoesNotCloseAutomatically() const {
    return false;
}


