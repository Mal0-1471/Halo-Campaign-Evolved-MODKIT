#pragma once
#include "CoreMinimal.h"
#include "EBlamEffectMode.h"
#include "BlamEffectThrottleConfig.generated.h"

USTRUCT(BlueprintType)
struct FBlamEffectThrottleConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TagName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Raduis;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamEffectMode Mode;
    
    BLAMSYNCHRONIZATION_API FBlamEffectThrottleConfig();
};

