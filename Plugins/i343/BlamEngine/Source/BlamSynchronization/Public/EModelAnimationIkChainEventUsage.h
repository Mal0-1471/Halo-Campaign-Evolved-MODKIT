#pragma once
#include "CoreMinimal.h"
#include "EModelAnimationIkChainEventUsage.generated.h"

UENUM(BlueprintType)
enum class EModelAnimationIkChainEventUsage : uint8 {
    Self,
    Parent,
    PrimaryWeapon,
    SecondaryWeapon,
    Assassination,
    Num,
};

