#pragma once
#include "CoreMinimal.h"
#include "EModelAnimationOverlayBlending.generated.h"

UENUM(BlueprintType)
enum class EModelAnimationOverlayBlending : uint8 {
    Additive,
    ReplacementObjectSpace,
    ReplacementLocalSpace,
};

