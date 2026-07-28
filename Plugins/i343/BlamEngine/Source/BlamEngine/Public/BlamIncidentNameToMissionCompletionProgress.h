#pragma once
#include "CoreMinimal.h"
#include "BlamMissionsDifficultyProgress.h"
#include "BlamIncidentNameToMissionCompletionProgress.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FBlamIncidentNameToMissionCompletionProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlamMissionsDifficultyProgress> IncidentToProgressMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlamMissionsDifficultyProgress> RemixIncidentToProgressMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlamMissionsDifficultyProgress> LASOIncidentToProgressMap;
    
    FBlamIncidentNameToMissionCompletionProgress();
};

