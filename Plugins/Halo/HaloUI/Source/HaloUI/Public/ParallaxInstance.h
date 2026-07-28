#pragma once
#include "CoreMinimal.h"
#include "ParallaxParams.h"
#include "ParallaxResult.h"
#include "ParallaxInstance.generated.h"

USTRUCT(BlueprintType)
struct FParallaxInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ParallaxTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParallaxParams ParallaxParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FParallaxResult ParallaxResult;
    
    HALOUI_API FParallaxInstance();
};

