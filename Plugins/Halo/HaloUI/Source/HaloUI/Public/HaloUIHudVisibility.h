#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayTagContainer.h"
#include "HaloUIHudVisibility.generated.h"

UCLASS(Abstract, Blueprintable)
class HALOUI_API UHaloUIHudVisibility : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHudStatesChanged, FGameplayTagContainer, ActiveStates);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHudElementVisibilityChanged, FGameplayTag, WidgetName, bool, bVisible);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudStatesChanged HudStatesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudElementVisibilityChanged HudElementVisibilityChanged;
    
    UHaloUIHudVisibility();

    UFUNCTION(BlueprintCallable)
    void ShowElement(FGameplayTag ElementName);
    
    UFUNCTION(BlueprintCallable)
    bool IsStateActive(FGameplayTag HudStateTag);
    
    UFUNCTION(BlueprintCallable)
    bool IsElementVisible(FGameplayTag ElementName);
    
    UFUNCTION(BlueprintCallable)
    void HideElement(FGameplayTag ElementName);
    
};

