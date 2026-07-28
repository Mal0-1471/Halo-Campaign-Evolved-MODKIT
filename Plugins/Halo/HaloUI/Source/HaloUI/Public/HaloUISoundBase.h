#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HaloUISoundBase.generated.h"

UCLASS(Abstract, Blueprintable)
class HALOUI_API UHaloUISoundBase : public UObject {
    GENERATED_BODY()
public:
    UHaloUISoundBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Play(UObject* WorldContextObject);
    
};

