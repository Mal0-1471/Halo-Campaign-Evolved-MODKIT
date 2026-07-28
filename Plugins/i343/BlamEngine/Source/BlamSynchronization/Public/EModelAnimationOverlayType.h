#pragma once
#include "CoreMinimal.h"
#include "EModelAnimationOverlayType.generated.h"

UENUM(BlueprintType)
enum class EModelAnimationOverlayType : uint8 {
    Pose,
    Keyframe,
};

