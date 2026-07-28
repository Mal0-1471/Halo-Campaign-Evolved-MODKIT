#pragma once
#include "CoreMinimal.h"

enum class EBlamObjectTypeFlags : uint16
{
    None,
    Biped,
    Control = 256,
    Crate = 1024,
    Creature = 2048,
    EffectScenery = 8192,
    Equipment = 8,
    Giant = 4096,
    Machine = 128,
    Projectile = 32,
    Scenery = 64,
    SoundScenery = 512,
    Terminal = 16,
    Vehicle = 2,
    Weapon = 4,
    EBlamObjectTypeFlags_MAX = 16384 UMETA(Hidden)
};
