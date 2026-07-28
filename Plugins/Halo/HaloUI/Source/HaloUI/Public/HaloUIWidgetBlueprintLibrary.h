#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SlateWrapperTypes.h"
#include "HaloUIWidgetBlueprintLibrary.generated.h"

class UWidget;

UCLASS(Blueprintable)
class UHaloUIWidgetBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHaloUIWidgetBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetVisibilityWrapper(UWidget* Widget, const ESlateVisibility InVisibility);
    
};

