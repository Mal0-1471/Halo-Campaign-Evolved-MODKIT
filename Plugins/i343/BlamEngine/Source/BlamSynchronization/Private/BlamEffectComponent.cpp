#include "BlamEffectComponent.h"

UBlamEffectComponent::UBlamEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsGlobal = false;
    this->bIsSpawnedByEffectSystem = false;
}

void UBlamEffectComponent::Stop_Implementation(const FBlamEffectData& EventData) {
}

void UBlamEffectComponent::Spawn_Implementation(const FBlamEffectData& EventData) {
}

void UBlamEffectComponent::Restart_Implementation(const FBlamEffectData& EventData) {
}

void UBlamEffectComponent::PingFromRicochet_Implementation(const FBlamEffectData& EventData) {
}

void UBlamEffectComponent::PingFromImpact_Implementation(const FBlamEffectData& EventData) {
}

void UBlamEffectComponent::PingFromChildProjectile_Implementation(const FBlamEffectData& EventData) {
}

void UBlamEffectComponent::Ping_Implementation(const FBlamEffectData& EventData) {
}

void UBlamEffectComponent::Destroy_Implementation(const FBlamEffectData& EventData) {
}


