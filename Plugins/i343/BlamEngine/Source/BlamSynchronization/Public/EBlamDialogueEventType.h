#pragma once
#include "CoreMinimal.h"
#include "EBlamDialogueEventType.generated.h"

UENUM()
enum class EBlamDialogueEventType : int32 {
    Bump,
    Dive,
    Evade,
    Lift,
    Sigh,
    Contempt,
    Anger,
    Fear,
    Relief,
    Sprint,
    SprintEnd,
    AssGrabber,
    KillAss,
    AssGrabbed,
    DieAss,
};

