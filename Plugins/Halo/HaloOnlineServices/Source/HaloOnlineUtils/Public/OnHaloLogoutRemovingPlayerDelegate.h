#pragma once
#include "CoreMinimal.h"
#include "Misc/CoreMiscDefines.h"
#include "OnHaloLogoutRemovingPlayerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHaloLogoutRemovingPlayer, FPlatformUserId, PlatformUserId);

