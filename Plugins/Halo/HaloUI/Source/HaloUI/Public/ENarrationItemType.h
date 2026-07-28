#pragma once
#include "CoreMinimal.h"
#include "ENarrationItemType.generated.h"

UENUM(BlueprintType)
enum class ENarrationItemType : uint8 {
    Item,
    Option,
    Player,
    Tab,
};

