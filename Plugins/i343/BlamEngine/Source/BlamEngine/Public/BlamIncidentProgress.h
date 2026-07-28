#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BlamIncidentProgress.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FBlamIncidentProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMustBeCausePlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMustBeEffectPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ProgressGameplayTag;
    
    FBlamIncidentProgress();
};

