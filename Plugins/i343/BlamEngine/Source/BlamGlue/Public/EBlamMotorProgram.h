#pragma once
#include "CoreMinimal.h"
#include "EBlamMotorProgram.generated.h"

UENUM(BlueprintType)
enum class EBlamMotorProgram : uint8 {
    BipedGround,
    BipedAirborne,
    BipedDead,
    BipedVehicle,
    BipedFlying,
    BipedPerch,
    BipedBunker,
    BipedClimb,
    BipedLeap,
    BipedPosture,
    BipedClamber,
    Vehicle,
    UnitCustomAnimation,
    UnitPhase,
    CreatureGround,
    CreatureFlying,
    GiantScarab,
    Num,
};

