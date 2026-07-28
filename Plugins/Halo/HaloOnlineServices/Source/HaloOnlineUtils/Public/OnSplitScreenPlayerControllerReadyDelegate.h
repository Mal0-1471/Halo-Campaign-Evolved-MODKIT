#pragma once
#include "CoreMinimal.h"
#include "Misc/CoreMiscDefines.h"
#include "OnSplitScreenPlayerControllerReadyDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSplitScreenPlayerControllerReady, FPlatformUserId, PlatformUserId, APlayerController*, PlayerController);

