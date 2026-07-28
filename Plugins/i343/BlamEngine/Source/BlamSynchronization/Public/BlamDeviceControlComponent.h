#pragma once
#include "CoreMinimal.h"
#include "EBlamDeviceControlType.h"
#include "BlamDeviceComponent.h"
#include "EBlamPropertyChangeReason.h"
#include "BlamDeviceControlComponent.generated.h"

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamDeviceControlComponent : public UBlamDeviceComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHealthStationInUseChanged, bool, bInUseFlag, int32, CurrentChargesRemaining, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthStationChargesRemainingChanged, int32, ChargesRemainingDelta, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnControlToggled, bool, bNewTogglePosition, EBlamPropertyChangeReason, BlamPropertyChangeReason);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControlToggled OnControlToggled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthStationInUseChanged OnHealthStationInUseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthStationChargesRemainingChanged OnHealthStationChargesRemainingChanged;
    
    UBlamDeviceControlComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHealthStationWithInfiniteCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHealthStationInUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEverToggled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTogglePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHealthStationChargesRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamDeviceControlType GetDeviceControlType() const;
    
};

