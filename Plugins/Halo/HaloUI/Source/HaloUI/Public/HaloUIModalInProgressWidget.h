#pragma once
#include "CoreMinimal.h"
#include "HaloUIModalPopupWidgetBase.h"
#include "HaloUIModalInProgressWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIModalInProgressWidget : public UHaloUIModalPopupWidgetBase {
    GENERATED_BODY()
public:
    UHaloUIModalInProgressWidget();

};

