#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HaloUIOptionalSound.h"
#include "HaloUIToggleSoundOverrideInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHaloUIToggleSoundOverrideInterface : public UInterface {
    GENERATED_BODY()
};

class IHaloUIToggleSoundOverrideInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FHaloUIOptionalSound GetToggleOnOptionalSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FHaloUIOptionalSound GetToggleOffOptionalSound() const;
    
};

