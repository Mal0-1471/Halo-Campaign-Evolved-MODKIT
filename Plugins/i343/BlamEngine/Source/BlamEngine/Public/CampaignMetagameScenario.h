#pragma once
#include "CoreMinimal.h"
#include "CampaignMetagameScenarioCompletionBonus.h"
#include "CampaignMetagameScenario.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FCampaignMetagameScenario {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCampaignMetagameScenarioCompletionBonus> TimeBonuses;
    
    FCampaignMetagameScenario();
};

