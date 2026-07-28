#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GpuBenchmarkThreshold.h"
#include "GpuQualityPreset.h"
#include "GpuQualityPresetDefaults.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Hardware)
class UGpuQualityPresetDefaults : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGpuQualityPreset> GpuQualityPresets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGpuBenchmarkThreshold> GpuBenchmarkThresholds;
    
    UGpuQualityPresetDefaults();

};

