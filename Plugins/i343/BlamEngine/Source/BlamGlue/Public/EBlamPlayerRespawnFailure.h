#pragma once
#include "CoreMinimal.h"
#include "EBlamPlayerRespawnFailure.generated.h"

UENUM(BlueprintType)
enum class EBlamPlayerRespawnFailure : uint8 {
    None,
    Waiting,
    UnsafeArea,
    Combat,
    Enemies,
    Projectiles,
    Editor,
    Cinematic,
    Scripting,
    Moving,
    Vehicle,
    GameLost,
    WaitingForCheckpoint,
    CanNotFindValidLocation,
    EnemiesInBase,
    WaitingForNewWave,
    Num,
};

