#pragma once
#include "CoreMinimal.h"
#include "CampaignMetagameScenarioCompletionBonus.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FCampaignMetagameScenarioCompletionBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScoreMultiplier;
    
    FCampaignMetagameScenarioCompletionBonus();
};

