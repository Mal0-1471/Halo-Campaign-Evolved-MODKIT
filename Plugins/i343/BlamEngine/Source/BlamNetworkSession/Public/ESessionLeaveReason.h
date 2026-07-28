#pragma once
#include "CoreMinimal.h"
#include "ESessionLeaveReason.generated.h"

UENUM(BlueprintType)
enum class ESessionLeaveReason : uint8 {
    UserRequested,
    HostLeft,
    Kicked,
    SessionDestroyed,
    ConnectionLost,
    PrivilegeRevoked,
    TransitionTimedOut,
    Unknown,
};

