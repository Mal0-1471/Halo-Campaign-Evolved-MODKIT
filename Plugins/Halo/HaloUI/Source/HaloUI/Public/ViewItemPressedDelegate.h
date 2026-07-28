#pragma once
#include "CoreMinimal.h"
#include "ViewItemPressedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FViewItemPressed, UObject*, Item);

