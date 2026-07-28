#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BlamMissionsDifficultyProgress.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FBlamMissionsDifficultyProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FGameplayTag> ScenarioNameToGameplayTagMap;
    
    FBlamMissionsDifficultyProgress();
};

