#pragma once
#include "CoreMinimal.h"
#include "EHaloOnlineResult.generated.h"

UENUM(BlueprintType)
enum class EHaloOnlineResult : uint8 {
    Offline,
    FailedToLoginToPlatform,
    FailedToGetPlatformToken,
    FailedToGetSpartanTokenUri,
    FailedToGetSpartanToken,
    FailedToGetHaloIdUri,
    FailedToCreateHaloId,
    FailedToGetPlayFabTokenUri,
    FailedToGetPlayFabToken,
    LoginToSteamRequired,
    AccessDenied,
    AlreadyLoggedInToPlatform,
    FailedToRecordInformation,
    FailedToLinkAccount,
    FailedToLinkStorageConflict,
    FailedToLinkAccountNotFound,
    FailedToLinkPlatformAccountAlreadyLinked,
    FailedToLinkHaloAccountAlreadyLinked,
    FailedToLinkPlatformAccountRelinkFailed,
    FailedToUnlinkPlatformAccountAlreadyLinked,
    FailedToUnlinkAccount,
    FailedToGetXstsToken,
    InviteOnlySession,
    SessionIsFull,
    CrossplayStatusConflict,
    FailedToValidateLinkedAccount,
    XsapiAccountUIRequired,
    XalSignedInElsewhere,
    XalTokenExpired,
    XalCountryNotAuthorized,
    Count,
};

