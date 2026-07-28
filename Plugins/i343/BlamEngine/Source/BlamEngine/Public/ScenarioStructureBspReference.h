#pragma once
#include "CoreMinimal.h"
#include "ScenarioStructureBspReferenceFlagsDefinition.h"
#include "ScenarioStructureBspReference.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FScenarioStructureBspReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StructureBsp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StructureLightingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScenarioStructureBspReferenceFlagsDefinition Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomGravityScale;
    
    FScenarioStructureBspReference();
};

