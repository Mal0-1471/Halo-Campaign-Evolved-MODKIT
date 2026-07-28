#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HaloPerformanceBucket.generated.h"

USTRUCT(BlueprintType)
struct HALOGRAPHICSTELEMETRY_API FHaloPerformanceBucket : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BucketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    FHaloPerformanceBucket();
};

