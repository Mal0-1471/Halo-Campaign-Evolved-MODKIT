#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BlamSaveGameEventInterface.generated.h"

UINTERFACE(Blueprintable)
class BLAMENGINE_API UBlamSaveGameEventInterface : public UInterface {
    GENERATED_BODY()
};

class BLAMENGINE_API IBlamSaveGameEventInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreActorSerialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateRestoredFromSaveGame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlamMapResetEvent();
    
};

