#pragma once
#include "CoreMinimal.h"
#include "GameFramework/InputDeviceProperties.h"
#include "BlamInputDeviceTriggerResetProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class BLAMENGINE_API UBlamInputDeviceTriggerResetProperty : public UInputDeviceTriggerEffect {
    GENERATED_BODY()
public:
    UBlamInputDeviceTriggerResetProperty();

};

