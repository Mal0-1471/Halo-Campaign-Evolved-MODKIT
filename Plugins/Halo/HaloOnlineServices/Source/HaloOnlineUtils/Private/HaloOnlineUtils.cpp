#include "HaloOnlineUtils.h"

UHaloOnlineUtils::UHaloOnlineUtils() {
    this->RichPresenceKeys = NULL;
}

void UHaloOnlineUtils::UpdateRichPresenceForUser(FPlatformUserId PlatformUserId, const FString& RichPresenceKey) {
}

TOptional<FString> UHaloOnlineUtils::TryGetPlayFabToken(FPlatformUserId PlatformUserId) {
    return TOptional<FString>();
}

TOptional<FString> UHaloOnlineUtils::TryGetPlayFabTitleId(FPlatformUserId PlatformUserId) {
    return TOptional<FString>();
}

TOptional<FString> UHaloOnlineUtils::TryGetPlayFabId(FPlatformUserId PlatformUserId) {
    return TOptional<FString>();
}

TOptional<FString> UHaloOnlineUtils::TryGetPlayFabClientSessionTicket(FPlatformUserId PlatformUserId) {
    return TOptional<FString>();
}

TOptional<FString> UHaloOnlineUtils::TryGetLinkedIdentity(FPlatformUserId PlatformUserId) {
    return TOptional<FString>();
}

TOptional<FString> UHaloOnlineUtils::TryGetCanonicalHaloId(FPlatformUserId PlatformUserId) {
    return TOptional<FString>();
}

bool UHaloOnlineUtils::IsXsapiEnabled() {
    return false;
}


