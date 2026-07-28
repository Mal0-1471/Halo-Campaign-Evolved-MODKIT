#pragma once
#include "CoreMinimal.h"
#include "ScenarioCinematicsFlags.h"
#include "ScenarioCinematicReference.generated.h"

class BLAMENGINE_API UBlamCinematicTagDataAsset;

USTRUCT(BlueprintType)
struct BLAMENGINE_API FScenarioCinematicReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScenarioCinematicsFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamCinematicTagDataAsset> Cinematic;
    
    FScenarioCinematicReference();
};

