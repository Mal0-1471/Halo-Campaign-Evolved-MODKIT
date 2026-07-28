#pragma once
#include "CoreMinimal.h"
#include "EBlamInfiniteAmmoSetting.generated.h"

UENUM(BlueprintType)
enum class EBlamInfiniteAmmoSetting : uint8 {
    Unchanged,
    Off,
    On,
    BottomlessClip,
    Num,
};

