#pragma once
#include "CoreMinimal.h"
#include "EScenarioTypeEnum.generated.h"

UENUM()
enum class EScenarioTypeEnum : int32 {
    Solo,
    Multiplayer,
    MainMenu,
    MultiplayerShared,
    SinglePlayerShared,
    SoundsShared,
};

