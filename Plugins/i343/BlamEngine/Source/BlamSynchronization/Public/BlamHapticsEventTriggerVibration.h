#pragma once
#include "CoreMinimal.h"
#include "GameFramework/InputDeviceProperties.h"
#include "BlamHapticsEventTriggerBase.h"
#include "BlamHapticsEventTriggerVibration.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamHapticsEventTriggerVibration : public UBlamHapticsEventTriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoopingVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeviceTriggerTriggerVibrationData TriggerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UBlamHapticsEventTriggerVibration();

};

