#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HaloUINarratableNodeBlueprintableInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHaloUINarratableNodeBlueprintableInterface : public UInterface {
    GENERATED_BODY()
};

class IHaloUINarratableNodeBlueprintableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetNarrationText(FText& NarrationText, const bool bFocusing) const;
    
};

