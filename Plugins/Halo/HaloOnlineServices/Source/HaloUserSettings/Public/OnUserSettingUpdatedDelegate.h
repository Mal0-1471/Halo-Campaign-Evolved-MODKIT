#pragma once
#include "CoreMinimal.h"
#include "OnUserSettingUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUserSettingUpdated, FName, SettingName);

