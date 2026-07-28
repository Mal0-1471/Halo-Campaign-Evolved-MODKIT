#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "HaloUIHudVisibilityTester.generated.h"

class UHaloUIHudVisibility;

UCLASS(Blueprintable)
class UHaloUIHudVisibilityTester : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHudVisibilityChanged, bool, bVisible);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HideForTheseHudStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HideForTheseHudElements;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHudVisibilityChanged HudVisibilityChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloUIHudVisibility* HudVisibilityObject;
    
public:
    UHaloUIHudVisibilityTester();

    UFUNCTION(BlueprintCallable)
    bool SyncVisibility(UHaloUIHudVisibility* HudVisibility);
    
    UFUNCTION(BlueprintCallable)
    void OnHudStatesChanged(FGameplayTagContainer ActiveStates);
    
    UFUNCTION(BlueprintCallable)
    void OnHudElementVisibilityChanged(FGameplayTag HudElementTag, bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsVisible() const;
    
};

