#pragma once
#include "CoreMinimal.h"
#include "EBlamScriptedNavpointPriority.generated.h"

UENUM(BlueprintType)
enum class EBlamScriptedNavpointPriority : uint8 {
    Objective,
    Destination,
    Recon,
    Neutralize,
    Interface,
    Hostile,
    Recover,
    Count,
};

