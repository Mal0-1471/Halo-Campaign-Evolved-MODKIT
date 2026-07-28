#pragma once
#include "CoreMinimal.h"
#include "EBlamRenderSettingsChangeType.generated.h"

UENUM(BlueprintType)
enum class EBlamRenderSettingsChangeType : uint8 {
    Unknown,
    PlayerAdded,
    PlayerRemoved,
    LevelChanged,
    CinematicStarted,
    CinematicStopped,
    TargetFramerate,
};

