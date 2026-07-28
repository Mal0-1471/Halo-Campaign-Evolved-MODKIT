#include "BlamObjectDamageComponent.h"

UBlamObjectDamageComponent::UBlamObjectDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysShowHitMarkers = false;
}

bool UBlamObjectDamageComponent::IsShieldDepleted() const {
    return false;
}

bool UBlamObjectDamageComponent::IsDead() const {
    return false;
}

bool UBlamObjectDamageComponent::HasOvershield() const {
    return false;
}

float UBlamObjectDamageComponent::GetShieldVitality() const {
    return 0.0f;
}

float UBlamObjectDamageComponent::GetShieldStunSeconds() const {
    return 0.0f;
}

float UBlamObjectDamageComponent::GetRecentShieldDamage() const {
    return 0.0f;
}

float UBlamObjectDamageComponent::GetRecentBodyDamage() const {
    return 0.0f;
}

float UBlamObjectDamageComponent::GetOvershieldAmount() const {
    return 0.0f;
}

float UBlamObjectDamageComponent::GetCurrentShieldDamage() const {
    return 0.0f;
}

float UBlamObjectDamageComponent::GetCurrentBodyDamage() const {
    return 0.0f;
}

float UBlamObjectDamageComponent::GetBodyVitality() const {
    return 0.0f;
}

float UBlamObjectDamageComponent::GetBodyStunSeconds() const {
    return 0.0f;
}

float UBlamObjectDamageComponent::GetActiveShieldVitality() const {
    return 0.0f;
}


