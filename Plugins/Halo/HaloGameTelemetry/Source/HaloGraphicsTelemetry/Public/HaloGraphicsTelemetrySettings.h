#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "HaloPerformanceBucketCollection.h"
#include "HaloGraphicsTelemetrySettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class HALOGRAPHICSTELEMETRY_API UHaloGraphicsTelemetrySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickTelemetryWhilePaused;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInclusiveBuckets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectResolutionTelemetry;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DynamicResolutionBuckets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollectFrameTimingTelemetry;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> FrameTimingBuckets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FHaloPerformanceBucketCollection> ImportedPerformanceBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumExclusiveFrameTimingBuckets;
    
public:
    UHaloGraphicsTelemetrySettings();

};

