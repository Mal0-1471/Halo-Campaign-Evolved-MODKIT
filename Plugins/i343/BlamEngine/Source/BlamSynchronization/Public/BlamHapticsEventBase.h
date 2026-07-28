#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EBlamHapticsEventPriority.h"
#include "EBlamHapticsEventType.h"
#include "BlamHapticsEventBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamHapticsEventBase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamHapticsEventType HapticsEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamHapticsEventPriority HapticsEventPriority;
    
    UBlamHapticsEventBase();

};

