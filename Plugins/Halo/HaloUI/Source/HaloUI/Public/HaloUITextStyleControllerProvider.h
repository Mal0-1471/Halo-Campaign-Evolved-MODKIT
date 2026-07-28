#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HaloUITextStyleControllerProvider.generated.h"

class UWidget;

UINTERFACE(Blueprintable, MinimalAPI)
class UHaloUITextStyleControllerProvider : public UInterface {
    GENERATED_BODY()
};

class IHaloUITextStyleControllerProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UWidget*> GetTextStyleControllerWidgets();
    
};

