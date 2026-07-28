#pragma once
#include "CoreMinimal.h"
#include "GpuBenchmarkThreshold.generated.h"

USTRUCT(BlueprintType)
struct FGpuBenchmarkThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GpuBenchmark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QualityGroup;
    
    TCQUALITYSUBSYSTEM_API FGpuBenchmarkThreshold();
};

