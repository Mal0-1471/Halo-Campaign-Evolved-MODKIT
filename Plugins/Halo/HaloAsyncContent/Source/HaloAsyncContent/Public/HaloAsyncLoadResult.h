#pragma once
#include "CoreMinimal.h"
#include "HaloAsyncLoadResult.generated.h"

USTRUCT(BlueprintType)
struct FHaloAsyncLoadResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* LoadedObject;
    
    HALOASYNCCONTENT_API FHaloAsyncLoadResult();
};

