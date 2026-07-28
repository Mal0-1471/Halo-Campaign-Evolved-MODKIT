#pragma once
#include "CoreMinimal.h"
#include "HaloUIModalPopupCreatedSignatureDelegate.generated.h"

class UCommonActivatableWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FHaloUIModalPopupCreatedSignature, UCommonActivatableWidget*, PopupWidget);

