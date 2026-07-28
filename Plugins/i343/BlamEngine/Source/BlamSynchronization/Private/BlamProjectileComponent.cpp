#include "BlamProjectileComponent.h"

UBlamProjectileComponent::UBlamProjectileComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UBlamProjectileComponent::IsTracer() const {
    return false;
}

bool UBlamProjectileComponent::IsAttached() const {
    return false;
}

float UBlamProjectileComponent::GetSpeedFraction() const {
    return 0.0f;
}

float UBlamProjectileComponent::GetLocalizedSpeed() const {
    return 0.0f;
}

float UBlamProjectileComponent::GetInitialSpeed() const {
    return 0.0f;
}

float UBlamProjectileComponent::GetFinalSpeed() const {
    return 0.0f;
}

float UBlamProjectileComponent::GetDetonationTimeFraction() const {
    return 0.0f;
}

float UBlamProjectileComponent::GetDestinationRangeFraction() const {
    return 0.0f;
}

float UBlamProjectileComponent::GetBounceDistanceFraction() const {
    return 0.0f;
}

float UBlamProjectileComponent::GetBounceDistance() const {
    return 0.0f;
}

int32 UBlamProjectileComponent::GetBounceCount() const {
    return 0;
}

float UBlamProjectileComponent::GetAccelerationRangeFraction() const {
    return 0.0f;
}


