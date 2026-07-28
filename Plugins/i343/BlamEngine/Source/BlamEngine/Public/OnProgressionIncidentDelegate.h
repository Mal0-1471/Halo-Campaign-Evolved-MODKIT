#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnProgressionIncidentDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProgressionIncident, FGameplayTag, ProgressTag);

