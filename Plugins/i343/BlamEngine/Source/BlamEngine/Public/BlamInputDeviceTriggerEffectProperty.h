#pragma once
#include "CoreMinimal.h"
#include "GameFramework/InputDeviceProperties.h"
#include "BlamInputDeviceTriggerEffectProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BLAMENGINE_API UBlamInputDeviceTriggerEffectProperty : public UInputDeviceTriggerEffect {
    GENERATED_BODY()
public:
    UBlamInputDeviceTriggerEffectProperty();

};

