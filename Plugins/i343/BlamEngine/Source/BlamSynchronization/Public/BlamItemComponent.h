#pragma once
#include "CoreMinimal.h"
#include "EBlamItemInventoryState.h"
#include "BlamObjectTypeComponent.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamItemComponent.generated.h"

class AActor;

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamItemComponent : public UBlamObjectTypeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryUnitChanged, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryStateChanged, EBlamItemInventoryState, PreviousState, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBelongsToPlayer, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryStateChanged OnInventoryStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryUnitChanged OnInventoryUnitChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBelongsToPlayer OnBelongsToPlayerChanged;
    
    UBlamItemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* TryAndGetLastInventoryBlamUnitActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* TryAndGetInventoryBlamUnitActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfiniteSupply() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEverBeenInUnitInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamItemInventoryState GetInventoryState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDetonationTimeRemainingInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BelongsToPlayer() const;
    
};

