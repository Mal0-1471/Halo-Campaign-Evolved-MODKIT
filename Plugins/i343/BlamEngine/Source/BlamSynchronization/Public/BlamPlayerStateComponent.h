#pragma once
#include "CoreMinimal.h"
#include "Components/PlayerStateComponent.h"
#include "BlamPlayerStateComponent.generated.h"

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamPlayerStateComponent : public UPlayerStateComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BlamAbsolutePlayerIndex, meta=(AllowPrivateAccess=true))
    int32 BlamAbsolutePlayerIndex;
    
public:
    UBlamPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_BlamAbsolutePlayerIndex() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlamAbsolutePlayerIndexUnset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasModifiedPlayerTraits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMachineInputUserIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetControlledUnitDatumIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBlamAbsolutePlayerIndex() const;
    
};

