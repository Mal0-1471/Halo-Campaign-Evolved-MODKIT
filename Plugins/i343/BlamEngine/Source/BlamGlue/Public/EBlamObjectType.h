#pragma once
#include "CoreMinimal.h"
#include "EBlamObjectType.generated.h"

UENUM(BlueprintType)
enum class EBlamObjectType : uint8 {
    Biped,
    Vehicle,
    Weapon,
    Equipment,
    Terminal,
    Projectile,
    Scenery,
    Machine,
    Control,
    SoundScenery,
    Crate,
    Creature,
    Giant,
    EffectScenery,
    Num,
    None = 255,
};

