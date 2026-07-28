#include "BlamEngineAudioGameSubsystem.h"

UBlamEngineAudioGameSubsystem::UBlamEngineAudioGameSubsystem() {
    this->PostLoadingScreenDelayFrames = 10;
    this->PostPauseMenuDelayFrames = 2;
}

UWorld* UBlamEngineAudioGameSubsystem::TryGetWorld() const {
    return NULL;
}

FSoftObjectPath UBlamEngineAudioGameSubsystem::TryGetPlayingCinematic() const {
    return FSoftObjectPath{};
}

ABlamGameState* UBlamEngineAudioGameSubsystem::TryGetBlamGameState() const {
    return NULL;
}

void UBlamEngineAudioGameSubsystem::SetGlobalState(const UAkStateValue* AkStateValue) {
}

void UBlamEngineAudioGameSubsystem::SetGlobalRtpc(const UAkRtpc* AkRtpc, float RtpcValue) {
}

void UBlamEngineAudioGameSubsystem::SendMusicEvent(const UHaloAudioMusicControl* MusicControl) {
}

void UBlamEngineAudioGameSubsystem::SendGlobalEvent(const UAkAudioEvent* AkEvent) {
}





void UBlamEngineAudioGameSubsystem::OnLoadLoadingManagerLoadFinishedOrFailed() {
}

void UBlamEngineAudioGameSubsystem::OnLoadingManagerLoadStarted() {
}



void UBlamEngineAudioGameSubsystem::OnCinematicSubsystemEndCinematic(bool bWasSkipped) {
}

void UBlamEngineAudioGameSubsystem::OnCinematicSubsystemBeginCinematic(ULevelSequence* LevelSequence) {
}



bool UBlamEngineAudioGameSubsystem::IsNetworkCoop() const {
    return false;
}

EBlamEngineAudioState UBlamEngineAudioGameSubsystem::GetState() const {
    return EBlamEngineAudioState::None;
}

bool UBlamEngineAudioGameSubsystem::GetIsPaused() const {
    return false;
}

FGameplayTagContainer UBlamEngineAudioGameSubsystem::GetActiveSkulls() const {
    return FGameplayTagContainer{};
}


