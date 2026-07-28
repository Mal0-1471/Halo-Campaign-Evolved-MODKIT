#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "EnhancedPlayerInput.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "HaloUIEnhancedPlayerInput.generated.h"

class ULocalPlayer;

UCLASS(Blueprintable, NonTransient)
class UHaloUIEnhancedPlayerInput : public UEnhancedPlayerInput {
    GENERATED_BODY()
public:
    UHaloUIEnhancedPlayerInput();

protected:
    UFUNCTION(BlueprintCallable)
    static FSlateBrush GetIconForInputDeviceKey(const ULocalPlayer* LocalPlayer, ECommonInputType InputType, FKey Key);
    
};

