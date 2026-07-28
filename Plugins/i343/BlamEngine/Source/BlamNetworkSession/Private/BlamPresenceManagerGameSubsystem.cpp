#include "BlamPresenceManagerGameSubsystem.h"

UBlamPresenceManagerGameSubsystem::UBlamPresenceManagerGameSubsystem() {
    this->MissionRichPresenceTableLoaded = NULL;
}

void UBlamPresenceManagerGameSubsystem::TickMenusPresence() {
}

void UBlamPresenceManagerGameSubsystem::SetTitleScreenPresence() {
}

void UBlamPresenceManagerGameSubsystem::SetMenusPresence() {
}

void UBlamPresenceManagerGameSubsystem::SetInGamePresence(EBlamPresenceModeName ModeName, const FString& MissionName) {
}

void UBlamPresenceManagerGameSubsystem::SetIdleTimeout(float Seconds) {
}

void UBlamPresenceManagerGameSubsystem::SetIdlePresence() {
}

void UBlamPresenceManagerGameSubsystem::ResetIdleTimer() {
}

bool UBlamPresenceManagerGameSubsystem::IsIdle() const {
    return false;
}

float UBlamPresenceManagerGameSubsystem::GetTimeUntilIdle() const {
    return 0.0f;
}

float UBlamPresenceManagerGameSubsystem::GetTimeSinceLastInput() const {
    return 0.0f;
}

float UBlamPresenceManagerGameSubsystem::GetIdleTimeout() const {
    return 0.0f;
}

float UBlamPresenceManagerGameSubsystem::GetIdleProgress() const {
    return 0.0f;
}

EBlamPresenceState UBlamPresenceManagerGameSubsystem::GetCurrentPresenceState() const {
    return EBlamPresenceState::InGame;
}


