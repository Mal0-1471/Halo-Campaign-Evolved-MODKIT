#include "HaloAudioBlueprintFunctionLibrary.h"

UHaloAudioBlueprintFunctionLibrary::UHaloAudioBlueprintFunctionLibrary() {
}

UHaloAudioTranscriptionSubsystem* UHaloAudioBlueprintFunctionLibrary::TryGetHaloAudioTranscriptionSubsystem(const UObject* WorldContext) {
    return NULL;
}

void UHaloAudioBlueprintFunctionLibrary::StopTrackedSound(FHaloAudioAttachedPlayingId& PlayingID) {
}

void UHaloAudioBlueprintFunctionLibrary::StopGlobalSound(FHaloAudioGlobalPlayingId PlayingID, const UObject* WorldContext) {
}

void UHaloAudioBlueprintFunctionLibrary::SetGlobalState(const UAkStateValue* State, const UObject* WorldContext) {
}

void UHaloAudioBlueprintFunctionLibrary::SetGlobalRtpc(const UAkRtpc* RtpcId, float RtpcValue, const UObject* WorldContext) {
}

void UHaloAudioBlueprintFunctionLibrary::SendMusicEvent_Local(const UHaloAudioMusicControl* MusicControlEvent, const UObject* WorldContext) {
}

void UHaloAudioBlueprintFunctionLibrary::SendMusicEvent_Authority(const UHaloAudioMusicControl* MusicControlEvent, uint8 ChannelId, const UObject* WorldContext) {
}

void UHaloAudioBlueprintFunctionLibrary::SendGlobalEvent(const UAkAudioEvent* Event, const UObject* WorldContext) {
}

FHaloAudioGlobalPlayingId UHaloAudioBlueprintFunctionLibrary::PlaySoundVariantAtPosition(const UHaloAudioSoundBase* SoundVariant, const AActor* Instigator, FVector position, FRotator orientation, float StartOffset, const UObject* WorldContext, const TArray<FHaloAudioRtpc>& RtpcArray) {
    return FHaloAudioGlobalPlayingId{};
}

FHaloAudioGlobalPlayingId UHaloAudioBlueprintFunctionLibrary::PlaySoundNonPositionally(const UHaloAudioSoundBase* Sound, const AActor* Instigator, const float StartOffset, const UObject* WorldContext, const TArray<FHaloAudioRtpc>& RtpcArray) {
    return FHaloAudioGlobalPlayingId{};
}

FHaloAudioGlobalPlayingId UHaloAudioBlueprintFunctionLibrary::PlaySoundAtPosition(const UHaloAudioSoundBase* Sound, const AActor* Instigator, FVector position, FRotator orientation, float StartOffset, const UObject* WorldContext, const TArray<FHaloAudioRtpc>& RtpcArray) {
    return FHaloAudioGlobalPlayingId{};
}

bool UHaloAudioBlueprintFunctionLibrary::IsTrackedSoundIdValid(const FHaloAudioAttachedPlayingId& PlayingID) {
    return false;
}

void UHaloAudioBlueprintFunctionLibrary::InvalidateTrackedSoundId(FHaloAudioAttachedPlayingId& PlayingID) {
}

FString UHaloAudioBlueprintFunctionLibrary::GetTranscriptionLine(const FHaloAudioTranscriptionLine& TranscriptionLine) {
    return TEXT("");
}

EHaloAudioPlayerRole UHaloAudioBlueprintFunctionLibrary::GetPlayerAudioRole(const AActor* Instigtor, UHaloAudioTrackingComponent* AudioTrackingComponent) {
    return EHaloAudioPlayerRole::NonPlayer;
}


