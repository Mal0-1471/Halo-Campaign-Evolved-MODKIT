#include "HaloAudioTrackingComponent.h"

UHaloAudioTrackingComponent::UHaloAudioTrackingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHaloAudioTrackingComponent::SetAttachedSwitch(const UAkSwitchValue* SWITCH) {
}

void UHaloAudioTrackingComponent::SetAttachedRtpc(const UAkRtpc* RtpcId, float RtpcValue) {
}

FHaloAudioAttachedPlayingId UHaloAudioTrackingComponent::PlaySoundVariant(const UHaloAudioSoundBase* SoundVariant, bool bAttached, USceneComponent* SocketComponent, FName SocketName, float StartOffset, const AActor* Instigator) {
    return FHaloAudioAttachedPlayingId{};
}

FHaloAudioAttachedPlayingId UHaloAudioTrackingComponent::PlaySound(const UHaloAudioSoundBase* Sound, bool bAttached, USceneComponent* SocketComponent, FName SocketName, float StartOffset, const AActor* Instigator, const USceneComponent* ShapeComponent) {
    return FHaloAudioAttachedPlayingId{};
}


