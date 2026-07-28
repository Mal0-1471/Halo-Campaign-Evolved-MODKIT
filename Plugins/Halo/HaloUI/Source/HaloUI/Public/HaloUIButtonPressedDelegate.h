#pragma once
#include "CoreMinimal.h"
#include "HaloUIButtonPressedDelegate.generated.h"

class UHaloUIButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHaloUIButtonPressed, UHaloUIButtonBase*, Button);

