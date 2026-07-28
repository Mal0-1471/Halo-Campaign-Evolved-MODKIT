#include "BlamUnitInventoryComponent.h"

UBlamUnitInventoryComponent::UBlamUnitInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

AActor* UBlamUnitInventoryComponent::GetWeapon(EBlamUnitWeaponIndex WeaponInventoryIndex) const {
    return NULL;
}

FBlamUnitGrenadeType UBlamUnitInventoryComponent::GetGrenadeType(int32 GrenadeInventoryIndex) const {
    return FBlamUnitGrenadeType{};
}

AActor* UBlamUnitInventoryComponent::GetEquipment(EBlamUnitEquipmentIndex EquipmentInventoryIndex) const {
    return NULL;
}

int32 UBlamUnitInventoryComponent::GetCurrentGrenadeInventoryIndex() const {
    return 0;
}


