#pragma once
#include "CoreMinimal.h"
#include "Misc/CoreMiscDefines.h"
#include "Misc/CoreMiscDefines.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "BlamHapticsLocalPlayerSubsystem.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamHapticsLocalPlayerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UBlamHapticsLocalPlayerSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnHardwareInputDeviceChanged(const FPlatformUserId UserId, const FInputDeviceId DeviceID);
    
};

