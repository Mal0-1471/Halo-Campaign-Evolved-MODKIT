#pragma once
#include "CoreMinimal.h"
#include "BlamControllerHapticsEventParams.h"
#include "BlamGameInstanceSubsystem.h"
#include "BlamHapticsEventHandle.h"
#include "BlamControllerHapticsSubsystem.generated.h"

class UBlamHapticsEventBase;
class UBlamHapticsEventTriggerBase;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamControllerHapticsSubsystem : public UBlamGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UBlamControllerHapticsSubsystem();

    UFUNCTION(BlueprintCallable)
    FBlamHapticsEventHandle TriggerHapticsEvent(const UBlamHapticsEventBase* Event, const FBlamControllerHapticsEventParams& Params);
    
    UFUNCTION(BlueprintCallable)
    bool StopHapticsEvent(FBlamHapticsEventHandle HapticsEventHandle);
    
    UFUNCTION(BlueprintCallable)
    FBlamHapticsEventHandle SetWeaponTriggerResistance(const UBlamHapticsEventTriggerBase* Event, const FBlamControllerHapticsEventParams& Params);
    
    UFUNCTION(BlueprintCallable)
    bool ResetWeaponTriggerResistance(FBlamHapticsEventHandle HapticsEventHandle);
    
};

