#pragma once
#include "CoreMinimal.h"
#include "EBlamAllegianceTeam.generated.h"

UENUM(BlueprintType)
enum class EBlamAllegianceTeam : uint8 {
    Default,
    Player,
    Human,
    Covenant,
    Brute,
    Mule,
    Spare,
    CovenantPlayer,
    Flood,
    Sentinel,
    Heretic,
    Prophet,
    Guilty,
    Unused13,
    Unused14,
    Unused15,
    Num,
    None = 255,
};

