#pragma once
#include "CoreMinimal.h"
#include "ScenarioStructureBspReferenceFlagsDefinition.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FScenarioStructureBspReferenceFlagsDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoPathfinding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNotANormallyPlayableSpaceInAnMPMapCheckThisOnSharedBSPs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCustomGravityScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoDefaultStructurePathfinding: 1;
    
    FScenarioStructureBspReferenceFlagsDefinition();
};

