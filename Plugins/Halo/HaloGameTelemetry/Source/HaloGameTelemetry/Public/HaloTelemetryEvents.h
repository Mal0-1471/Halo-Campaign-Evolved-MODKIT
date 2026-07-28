#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HaloTelemetryEvents.generated.h"

USTRUCT(BlueprintType)
struct FHaloTelemetryEvents : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> Events;
    
    HALOGAMETELEMETRY_API FHaloTelemetryEvents();
};

