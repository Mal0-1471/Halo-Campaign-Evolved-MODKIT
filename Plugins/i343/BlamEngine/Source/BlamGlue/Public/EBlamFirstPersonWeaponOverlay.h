#pragma once
#include "CoreMinimal.h"
#include "EBlamFirstPersonWeaponOverlay.generated.h"

UENUM(BlueprintType)
enum class EBlamFirstPersonWeaponOverlay : uint8 {
    Jump,
    Fall,
    LandSoft,
    LandHard,
    Num,
    None = 255,
};

