#pragma once
#include "CoreMinimal.h"
#include "EBlamOnlineSessionTransitionState.generated.h"

UENUM(BlueprintType)
enum class EBlamOnlineSessionTransitionState : uint8 {
    Idle,
    CreatingSession,
    LeavingSession,
    LeavingForJoin,
    JoiningSession,
    ReturningToMainMenu,
    ProcessingPlatformInvite,
};

