#include "BlamInputMapper.h"

UBlamInputMapper::UBlamInputMapper() {
}

void UBlamInputMapper::UnmapKeyForBlamInputAction(const int32 LocalPlayerIndex, EBlamInputAction BlamInputAction, EBlamInputDeviceType InputDevice, EBlamKeyBindingSlot KeySlot) {
}

void UBlamInputMapper::UnmapAllConflictingBlamInputActionsFromKey(const int32 LocalPlayerIndex, FKey Key, const UBlamInputAction* Action, EBlamInputDeviceType InputDevice, EBlamKeyBindingSlot KeySlot) {
}

EInputMapperErrorCode UBlamInputMapper::TryAndSetKeyForAction(const int32 LocalPlayerIndex, const UBlamInputAction* Action, FKey NewKey, FInputMapperOutputErrorData& OutInputMapperOutputErrorData, EBlamKeyBindingSlot KeySlot, const bool bSkipExclusivity) {
    return EInputMapperErrorCode::Success;
}

bool UBlamInputMapper::SetSelectedPreset(const FName& PresetName, const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice) {
    return false;
}

EInputMapperErrorCode UBlamInputMapper::SetKeyForAction(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice, const UBlamInputAction* Action, FKey NewKey, FInputMapperOutputErrorData& OutInputMapperOutputErrorData, EBlamKeyBindingSlot KeySlot, const bool bSkipExclusivity) {
    return EInputMapperErrorCode::Success;
}

bool UBlamInputMapper::SaveSelectedPreset(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice) {
    return false;
}

bool UBlamInputMapper::SaveCustomPreset(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice) {
    return false;
}

bool UBlamInputMapper::ResetCustomPreset(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice) {
    return false;
}

bool UBlamInputMapper::IsCustomPresetValid(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice) const {
    return false;
}

bool UBlamInputMapper::IsActionMappingValid(const int32 LocalPlayerIndex, const UBlamInputAction* Action, EBlamInputDeviceType InputDevice, EBlamKeyBindingSlot KeySlot) const {
    return false;
}

FKey UBlamInputMapper::GetKeyForAction(const int32 LocalPlayerIndex, const UBlamInputAction* Action, EBlamInputDeviceType InputDevice, EBlamKeyBindingSlot KeySlot) {
    return FKey{};
}

FBlamInputPreset UBlamInputMapper::GetFixedPreset(const FName PresetName, const int32 LocalPlayerIndex) {
    return FBlamInputPreset{};
}

FBlamInputPreset UBlamInputMapper::GetCustomPreset(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice) {
    return FBlamInputPreset{};
}

FName UBlamInputMapper::GetBasePresetForCustomPreset(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice) {
    return NAME_None;
}

bool UBlamInputMapper::CustomPresetDoesNotExistOrIsValid(const int32 LocalPlayerIndex, EBlamInputDeviceType InputDevice) const {
    return false;
}


