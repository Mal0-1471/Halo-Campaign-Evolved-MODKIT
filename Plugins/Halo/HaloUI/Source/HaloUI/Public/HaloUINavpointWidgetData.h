#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "HaloUINavpointWidgetData.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UHaloUINavpointWidgetData : public UInterface {
    GENERATED_BODY()
};

class IHaloUINavpointWidgetData : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTextParameter(FName Name, const FText& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScalarParameter(FName Name, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPositionScaleYaw(FVector2f position, float Scale, float Yaw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPinState(FName PinState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAge(float Value);
    
};

