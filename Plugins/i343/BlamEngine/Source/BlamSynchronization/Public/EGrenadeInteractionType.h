#pragma once
#include "CoreMinimal.h"
#include "EGrenadeInteractionType.generated.h"

UENUM(BlueprintType)
enum class EGrenadeInteractionType : uint8 {
    FragExplosion,
    PlasmaExplosion,
    PlasmaAttached,
    Count,
};

