#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HaloAudioMusicDeferredConditionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioMusicDeferredConditionBase : public UObject {
    GENERATED_BODY()
public:
    UHaloAudioMusicDeferredConditionBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndConditions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginConditions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AreConditionsMet();
    
};

