#pragma once
#include "CoreMinimal.h"
#include "BlamIncidentProgress.h"
#include "BlamIncidentNameToProgressMap.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FBlamIncidentNameToProgressMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlamIncidentProgress> Map;
    
    FBlamIncidentNameToProgressMap();
};

