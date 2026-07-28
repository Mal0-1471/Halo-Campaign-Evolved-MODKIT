#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GamepadLightEventData.h"
#include "BlamGamepadLightEventDataAsset.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamGamepadLightEventDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGamepadLightEventData> LightEvents;
    
    UBlamGamepadLightEventDataAsset();

};

