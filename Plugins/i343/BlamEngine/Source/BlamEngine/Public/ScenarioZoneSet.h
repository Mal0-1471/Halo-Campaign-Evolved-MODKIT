#pragma once
#include "CoreMinimal.h"
#include "ScenarioZoneSetFlagsDefinition.h"
#include "ScenarioZoneSet.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FScenarioZoneSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScenarioZoneSetFlagsDefinition Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BspZoneFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StructureDesignZoneFlags;
    
    FScenarioZoneSet();
};

