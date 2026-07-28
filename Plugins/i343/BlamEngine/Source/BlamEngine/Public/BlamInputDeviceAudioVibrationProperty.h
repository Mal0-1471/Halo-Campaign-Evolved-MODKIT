#pragma once
#include "CoreMinimal.h"
#include "GameFramework/InputDeviceProperties.h"
#include "BlamInputDeviceAudioVibrationProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BLAMENGINE_API UBlamInputDeviceAudioVibrationProperty : public UInputDeviceProperty {
    GENERATED_BODY()
public:
    UBlamInputDeviceAudioVibrationProperty();

};

