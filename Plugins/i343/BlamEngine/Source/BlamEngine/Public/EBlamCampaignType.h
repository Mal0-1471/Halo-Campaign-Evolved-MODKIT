#pragma once
#include "CoreMinimal.h"
#include "EBlamCampaignType.generated.h"

UENUM(BlueprintType)
enum class EBlamCampaignType : uint8 {
    Campaign,
    DLC,
    Remix,
    None,
    Count,
};

