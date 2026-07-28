#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "BlamEffectThrottleConfig.h"
#include "BlamEffectThrottlingSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UBlamEffectThrottlingSettings : public UDeveloperSettingsBackedByCVars {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlamEffectThrottlingEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlamEffectThrottlingCulling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlamEffectThrottlingExecutionBudget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlamEffectThrottlingNoCullRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlamEffectThrottlingRequestPurgeThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlamEffectThrottlingPurgeGroupThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlamEffectThrottlingPurgeAgeThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlamEffectThrottlingRelevanceDistanceFalloff;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlamEffectThrottlingRelevanceDistanceWeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlamEffectThrottlingRelevanceFacingWeight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamEffectThrottleConfig> EffectConfigs;
    
    UBlamEffectThrottlingSettings();

};

