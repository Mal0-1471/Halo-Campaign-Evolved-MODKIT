#include "BlamItemComponent.h"

UBlamItemComponent::UBlamItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

AActor* UBlamItemComponent::TryAndGetLastInventoryBlamUnitActor() const {
    return NULL;
}

AActor* UBlamItemComponent::TryAndGetInventoryBlamUnitActor() const {
    return NULL;
}

bool UBlamItemComponent::IsInfiniteSupply() const {
    return false;
}

bool UBlamItemComponent::HasEverBeenInUnitInventory() const {
    return false;
}

EBlamItemInventoryState UBlamItemComponent::GetInventoryState() const {
    return EBlamItemInventoryState::Free;
}

float UBlamItemComponent::GetDetonationTimeRemainingInSeconds() const {
    return 0.0f;
}

bool UBlamItemComponent::BelongsToPlayer() const {
    return false;
}


