#pragma once
#include "CoreMinimal.h"
#include "EBlamInputAction.h"
#include "EBlamInputDeviceType.h"
#include "EBlamKeyBindingSlot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputCoreTypes.h"
#include "BlamInputPreset.h"
#include "EInputMapperErrorCode.h"
#include "InputMapperOutputErrorData.h"
#include "BlamInputMapper.generated.h"

class BLAMENGINE_API UBlamInputAction;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamInputMapper : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdatedCustomPreset, int32, LocalUserIndex, EBlamInputDeviceType, InputDevice);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreatedCustomPreset, int32, LocalUserIndex, EBlamInputDeviceType, InputDevice);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAppliedPreset, int32, LocalUserIndex, EBlamInputDeviceType, InputDevice);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreatedCustomPreset CreatedCustomPreset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdatedCustomPreset UpdatedCustomPreset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAppliedPreset OnAppliedPreset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlamInputPreset> FixedInputPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UBlamInputAction*> GamepadInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UBlamInputAction*> MouseAndKeyboardInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamInputPreset> CustomInputPresetsGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamInputPreset> CustomInputPresetsKBM;
    
public:
    UBlamInputMapper();

    UFUNCTION(BlueprintCallable)
    void UnmapKeyForBlamInputAction(const int32 LocalPlayerIndex, EBlamInputAction BlamInputAction, EBlamInputDeviceType InputDevice, EBlamKeyBindingSlot KeySlot);
    
    UFUNCTION(BlueprintCallable)
    void UnmapAllConflictingBlamInputActionsFromKey(const int32 LocalPlayerIndex, FKey Key, const UBlamInputAction* Action, EBlamInputDeviceType InputDevice, EBlamKeyBindingSlot KeySlot);
    
    UFUNCTION(BlueprintCallable)
    EInputMapperErrorCode TryAndSetKeyForAction(const int32 LocalPlayerIndex, const UBlamInputAction* Action, FKey NewKey, FInputMapperOutputErrorData& OutInputMapperOutputErrorData, EBlamKeyBindingSlot KeySlot, const bool bSkipExclusivity);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedPreset(const FName& PresetName, const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice);
    
    UFUNCTION(BlueprintCallable)
    EInputMapperErrorCode SetKeyForAction(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice, const UBlamInputAction* Action, FKey NewKey, FInputMapperOutputErrorData& OutInputMapperOutputErrorData, EBlamKeyBindingSlot KeySlot, const bool bSkipExclusivity);
    
    UFUNCTION(BlueprintCallable)
    bool SaveSelectedPreset(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice);
    
    UFUNCTION(BlueprintCallable)
    bool SaveCustomPreset(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice);
    
    UFUNCTION(BlueprintCallable)
    bool ResetCustomPreset(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCustomPresetValid(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionMappingValid(const int32 LocalPlayerIndex, const UBlamInputAction* Action, EBlamInputDeviceType InputDevice, EBlamKeyBindingSlot KeySlot) const;
    
    UFUNCTION(BlueprintCallable)
    FKey GetKeyForAction(const int32 LocalPlayerIndex, const UBlamInputAction* Action, EBlamInputDeviceType InputDevice, EBlamKeyBindingSlot KeySlot);
    
    UFUNCTION(BlueprintCallable)
    FBlamInputPreset GetFixedPreset(const FName PresetName, const int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    FBlamInputPreset GetCustomPreset(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice);
    
    UFUNCTION(BlueprintCallable)
    FName GetBasePresetForCustomPreset(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CustomPresetDoesNotExistOrIsValid(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice) const;
    
};

