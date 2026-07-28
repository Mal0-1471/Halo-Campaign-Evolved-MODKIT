#pragma once
#include "CoreMinimal.h"
#include "EBlamCampaignDifficultyLevel.generated.h"

UENUM(BlueprintType)
enum class EBlamCampaignDifficultyLevel : uint8 {
    Easy,
    Normal,
    Heroic,
    Legendary,
    Num,
    None = 255,
};

