#pragma once
#include "CoreMinimal.h"
#include "GameFramework/InputDeviceProperties.h"
#include "BlamInputDeviceForceFeedbackVibrationProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BLAMENGINE_API UBlamInputDeviceForceFeedbackVibrationProperty : public UInputDeviceProperty {
    GENERATED_BODY()
public:
    UBlamInputDeviceForceFeedbackVibrationProperty();

};

