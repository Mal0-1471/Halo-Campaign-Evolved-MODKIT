#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "HaloPerformanceBucketCollection.h"
#include "HaloMemoryTelemetrySettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class HALOGRAPHICSTELEMETRY_API UHaloMemoryTelemetrySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickTelemetryWhilePaused;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInclusiveBuckets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectMemoryTelemetry;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> MemoryUsageBuckets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FHaloPerformanceBucketCollection> ImportedPerformanceBuckets;
    
public:
    UHaloMemoryTelemetrySettings();

};

