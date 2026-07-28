#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BlamEffectData.h"
#include "BlamBreakableSurface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UBlamBreakableSurface : public UInterface {
    GENERATED_BODY()
};

class IBlamBreakableSurface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsBroken(bool bIsBroken);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreak(const FBlamEffectData& EffectData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetIsBroken() const;
    
};

