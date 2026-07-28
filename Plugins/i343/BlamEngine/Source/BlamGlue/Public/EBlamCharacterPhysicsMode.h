#pragma once
#include "CoreMinimal.h"
#include "EBlamCharacterPhysicsMode.generated.h"

UENUM(BlueprintType)
enum class EBlamCharacterPhysicsMode : uint8 {
    None,
    Ground,
    Flying,
    Dead,
    Posture,
    Climbing,
    Melee,
    Num,
};

