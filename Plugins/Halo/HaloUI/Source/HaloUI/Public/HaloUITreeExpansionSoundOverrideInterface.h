#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HaloUIOptionalSound.h"
#include "HaloUITreeExpansionSoundOverrideInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHaloUITreeExpansionSoundOverrideInterface : public UInterface {
    GENERATED_BODY()
};

class IHaloUITreeExpansionSoundOverrideInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FHaloUIOptionalSound GetExpandOptionalSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FHaloUIOptionalSound GetCollapseOptionalSound() const;
    
};

