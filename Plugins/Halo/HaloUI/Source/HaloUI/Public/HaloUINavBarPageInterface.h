#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HaloUINavBarPageInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UHaloUINavBarPageInterface : public UInterface {
    GENERATED_BODY()
};

class IHaloUINavBarPageInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBecameActiveNavBarPage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetNavBarButtonName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetNavBarButtonDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetNavBarButtonData() const;
    
};

