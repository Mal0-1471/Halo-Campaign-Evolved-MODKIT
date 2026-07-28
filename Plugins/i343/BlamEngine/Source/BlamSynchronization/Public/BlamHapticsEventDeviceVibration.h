#pragma once
#include "CoreMinimal.h"
#include "BlamHapticsEventBase.h"
#include "BlamHapticsEventDeviceVibration.generated.h"

class UForceFeedbackAttenuation;
class UForceFeedbackEffect;
class USoundBase;

UCLASS(Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamHapticsEventDeviceVibration : public UBlamHapticsEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIs3DHaptic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoopingVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* VibrationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackAttenuation* ForceFeedbackAttenuation;
    
    UBlamHapticsEventDeviceVibration();

};

