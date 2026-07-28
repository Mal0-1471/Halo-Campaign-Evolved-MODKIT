#include "BlamBipedComponent.h"

UBlamBipedComponent::UBlamBipedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UBlamBipedComponent::IsStunned() const {
    return false;
}

bool UBlamBipedComponent::IsInFlightAnimation() const {
    return false;
}

bool UBlamBipedComponent::IsFlying() const {
    return false;
}

bool UBlamBipedComponent::HasReducedGravity() const {
    return false;
}

float UBlamBipedComponent::GetFlyingSpeedFraction() const {
    return 0.0f;
}

EBlamAICombatStatus UBlamBipedComponent::GetAICombatStatus() const {
    return EBlamAICombatStatus::Asleep;
}


