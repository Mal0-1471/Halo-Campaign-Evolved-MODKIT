#pragma once
#include "CoreMinimal.h"
#include "GameFramework/InputDeviceProperties.h"
#include "BlamHapticsEventTriggerBase.h"
#include "BlamHapticsEventTriggerResistanceSlope.generated.h"

UCLASS(Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamHapticsEventTriggerResistanceSlope : public UBlamHapticsEventTriggerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeviceTriggerTriggerResistanceData ResistanceData;
    
    UBlamHapticsEventTriggerResistanceSlope();

};

