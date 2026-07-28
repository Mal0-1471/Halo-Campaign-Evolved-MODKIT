#pragma once
#include "CoreMinimal.h"
#include "EHaloUIModalPopupResult.h"
#include "HaloUIModalPopupResultSignatureDelegate.generated.h"

class UHaloUIPopupInitData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHaloUIModalPopupResultSignature, EHaloUIModalPopupResult, Result, UHaloUIPopupInitData*, PopupInitData);

