#pragma once
#include "CoreMinimal.h"
#include "BlamHapticsEventBase.h"
#include "EBlamHapticsAffectedTriggerAction.h"
#include "BlamHapticsEventTriggerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamHapticsEventTriggerBase : public UBlamHapticsEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamHapticsAffectedTriggerAction AffectedTriggerAction;
    
    UBlamHapticsEventTriggerBase();

};

