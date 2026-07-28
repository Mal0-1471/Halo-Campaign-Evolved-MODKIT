#include "BlamWeaponComponent.h"

UBlamWeaponComponent::UBlamWeaponComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHideWeaponOnZoom = false;
    this->bAlwaysAppearFirstPersonWhenZoomed = false;
    this->bShowGhostReticle = false;
    this->bShowLockOnReticle = false;
    this->WeaponDataAsset = NULL;
    this->BarrelFireTriggerVibrationHapticsEvent = NULL;
    this->BarrelFireTriggerResistanceHapticsEvent = NULL;
}

AActor* UBlamWeaponComponent::TryAndGetFirstPersonActor() const {
    return NULL;
}

bool UBlamWeaponComponent::IsVenting() const {
    return false;
}

bool UBlamWeaponComponent::IsTurningOn() const {
    return false;
}

bool UBlamWeaponComponent::IsTurnedOn() const {
    return false;
}

bool UBlamWeaponComponent::IsStowed() const {
    return false;
}

bool UBlamWeaponComponent::IsReady() const {
    return false;
}

bool UBlamWeaponComponent::IsOverheated() const {
    return false;
}

bool UBlamWeaponComponent::IsLatchAutofireCharged() const {
    return false;
}

bool UBlamWeaponComponent::IsInAlternateState() const {
    return false;
}

bool UBlamWeaponComponent::IsBatteryWeapon() const {
    return false;
}

bool UBlamWeaponComponent::IsBatteryEmpty() const {
    return false;
}

bool UBlamWeaponComponent::HasTrigger(EBlamWeaponTrigger TriggerIndex) const {
    return false;
}

bool UBlamWeaponComponent::HasMagazine(EBlamWeaponMagazine MagazineIndex) const {
    return false;
}

bool UBlamWeaponComponent::HasInfiniteAmmo() const {
    return false;
}

bool UBlamWeaponComponent::HasBottomlessClip() const {
    return false;
}

bool UBlamWeaponComponent::HasBarrel(EBlamWeaponBarrel BarrelIndex) const {
    return false;
}

float UBlamWeaponComponent::GetVentingProgress() const {
    return 0.0f;
}

int32 UBlamWeaponComponent::GetTriggerCount() const {
    return 0;
}

FBlamWeaponTrigger UBlamWeaponComponent::GetTrigger(EBlamWeaponTrigger TriggerIndex, EWeaponStructGetResult& GetResult) const {
    return FBlamWeaponTrigger{};
}

FBlamWeaponTracking UBlamWeaponComponent::GetTracking() const {
    return FBlamWeaponTracking{};
}

float UBlamWeaponComponent::GetTetherFraction() const {
    return 0.0f;
}

float UBlamWeaponComponent::GetPower() const {
    return 0.0f;
}

float UBlamWeaponComponent::GetOverheatedAmount() const {
    return 0.0f;
}

int32 UBlamWeaponComponent::GetMagazineCount() const {
    return 0;
}

FBlamWeaponMagazine UBlamWeaponComponent::GetMagazine(EBlamWeaponMagazine MagazineIndex, EWeaponStructGetResult& GetResult) const {
    return FBlamWeaponMagazine{};
}

float UBlamWeaponComponent::GetHeat() const {
    return 0.0f;
}

float UBlamWeaponComponent::GetBattery() const {
    return 0.0f;
}

float UBlamWeaponComponent::GetBarrelSpin() const {
    return 0.0f;
}

int32 UBlamWeaponComponent::GetBarrelCount() const {
    return 0;
}

FBlamWeaponBarrel UBlamWeaponComponent::GetBarrel(EBlamWeaponBarrel BarrelIndex, EWeaponStructGetResult& GetResult) const {
    return FBlamWeaponBarrel{};
}

bool UBlamWeaponComponent::CanTrack() const {
    return false;
}


