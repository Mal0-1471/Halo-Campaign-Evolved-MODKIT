#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HaloUINavBarButtonInterface.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UHaloUINavBarButtonInterface : public UInterface {
    GENERATED_BODY()
};

class IHaloUINavBarButtonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNavBarButtonName(const FText& NewName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNavBarButtonDescription(const FText& NewDescription);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNavBarButtonData(const UObject* Data);
    
};

