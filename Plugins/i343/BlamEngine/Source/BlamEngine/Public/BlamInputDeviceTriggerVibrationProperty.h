#pragma once
#include "CoreMinimal.h"
#include "GameFramework/InputDeviceProperties.h"
#include "BlamInputDeviceTriggerVibrationProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BLAMENGINE_API UBlamInputDeviceTriggerVibrationProperty : public UInputDeviceTriggerEffect {
    GENERATED_BODY()
public:
    UBlamInputDeviceTriggerVibrationProperty();

};

