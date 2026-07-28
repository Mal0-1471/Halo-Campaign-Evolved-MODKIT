#pragma once
#include "CoreMinimal.h"
#include "EBlamVehicleType.generated.h"

UENUM(BlueprintType)
enum class EBlamVehicleType : uint8 {
    HumanTank,
    HumanJeep,
    HumanPlane,
    Wolverine,
    AlienScout,
    AlienFighter,
    Turret,
    Mantis,
    Vtol,
    Chopper,
    Guardian,
    JackalGlider,
    Boat,
    SpaceFighter,
    Revenant,
    Num,
    None = 255,
};

