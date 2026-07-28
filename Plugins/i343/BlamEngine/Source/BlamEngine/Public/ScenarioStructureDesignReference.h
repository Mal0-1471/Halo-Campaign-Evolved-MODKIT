#pragma once
#include "CoreMinimal.h"
#include "ScenarioStructureDesignReference.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FScenarioStructureDesignReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StructureDesign;
    
    FScenarioStructureDesignReference();
};

