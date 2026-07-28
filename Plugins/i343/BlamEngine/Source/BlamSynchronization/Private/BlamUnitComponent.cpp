#include "BlamUnitComponent.h"

UBlamUnitComponent::UBlamUnitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

APawn* UBlamUnitComponent::TryAndGetControllingPlayerPawn() const {
    return NULL;
}

bool UBlamUnitComponent::ThrottleInReverse() const {
    return false;
}

bool UBlamUnitComponent::IsThrowingGrenadeOrShooting() const {
    return false;
}

bool UBlamUnitComponent::IsSeatedInParent() const {
    return false;
}

bool UBlamUnitComponent::IsGunnerSeatOccupied() const {
    return false;
}

bool UBlamUnitComponent::IsEmped() const {
    return false;
}

bool UBlamUnitComponent::IsDriverSeatOccupied() const {
    return false;
}

bool UBlamUnitComponent::IsControlledByAnyPlayer() const {
    return false;
}

bool UBlamUnitComponent::IsActiveCamouflageActive() const {
    return false;
}

bool UBlamUnitComponent::HasInfiniteGrenades() const {
    return false;
}

bool UBlamUnitComponent::HasBoost() const {
    return false;
}

float UBlamUnitComponent::GetZoomMagnification() const {
    return 0.0f;
}

float UBlamUnitComponent::GetZoomLevelFraction() const {
    return 0.0f;
}

int32 UBlamUnitComponent::GetZoomLevelAbsolute() const {
    return 0;
}

float UBlamUnitComponent::GetVerticalAimingVelocityFraction() const {
    return 0.0f;
}

FVector UBlamUnitComponent::GetThrottle() const {
    return FVector{};
}

TArray<FBlamUnitSeatState> UBlamUnitComponent::GetSeatStates() const {
    return TArray<FBlamUnitSeatState>();
}

int32 UBlamUnitComponent::GetParentWeaponDatumIndex() const {
    return 0;
}

int32 UBlamUnitComponent::GetParentSeatIndex() const {
    return 0;
}

float UBlamUnitComponent::GetOpenAmount() const {
    return 0.0f;
}

int32 UBlamUnitComponent::GetNextEmptySeatIndex(int32 SeatIndexCursor) const {
    return 0;
}

int32 UBlamUnitComponent::GetLastControllingPlayerDatumIndex() const {
    return 0;
}

float UBlamUnitComponent::GetHorizontalAimingVelocityFraction() const {
    return 0.0f;
}

float UBlamUnitComponent::GetGunnerSeatPower() const {
    return 0.0f;
}

float UBlamUnitComponent::GetEmp() const {
    return 0.0f;
}

float UBlamUnitComponent::GetDriverSeatPower() const {
    return 0.0f;
}

float UBlamUnitComponent::GetCrouch() const {
    return 0.0f;
}

int32 UBlamUnitComponent::GetControllingPlayerDatumIndex() const {
    return 0;
}

float UBlamUnitComponent::GetClosedAmount() const {
    return 0.0f;
}

float UBlamUnitComponent::GetBoostRecharge() const {
    return 0.0f;
}

float UBlamUnitComponent::GetBoostPower() const {
    return 0.0f;
}

float UBlamUnitComponent::GetBoost() const {
    return 0.0f;
}

float UBlamUnitComponent::GetAimingVelocityFraction() const {
    return 0.0f;
}

float UBlamUnitComponent::GetActiveCamouflageIntensity() const {
    return 0.0f;
}

float UBlamUnitComponent::GetAbsoluteForwardThrottle() const {
    return 0.0f;
}


