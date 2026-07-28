#pragma once
#include "CoreMinimal.h"
#include "BlamObjectTypeComponent.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamDeviceComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamDeviceComponent : public UBlamObjectTypeComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPositionFractionChanged, float, PreviousPositionFraction, float, PositionFraction, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFractionChanged_BP, float, DeltaFraction, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPositionFractionChanged OnPositionFractionChanged;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFractionChanged_BP OnPowerFractionChanged_BP;
    
public:
    UBlamDeviceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPositionFractionReversed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotUsableFromAnySide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPowerFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPositionFractionPlaybackRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPositionFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChangeInPowerFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChangeInPositionFraction() const;
    
};

