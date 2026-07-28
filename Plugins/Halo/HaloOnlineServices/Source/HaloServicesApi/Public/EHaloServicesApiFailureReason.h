#pragma once
#include "CoreMinimal.h"
#include "EHaloServicesApiFailureReason.generated.h"

UENUM(BlueprintType)
enum class EHaloServicesApiFailureReason : uint8 {
    Success,
    UnableToFindUri,
    NoServices,
    NotLoggedIn,
    HttpErrorCode,
    RequestFailure,
};

