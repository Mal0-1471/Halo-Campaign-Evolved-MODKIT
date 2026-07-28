#pragma once
#include "CoreMinimal.h"
#include "ENarrationWidgetType.generated.h"

UENUM(BlueprintType)
enum class ENarrationWidgetType : uint8 {
    None,
    Button,
    List,
    Toggle,
    Slider,
    Dropdown,
    EditableText,
};

