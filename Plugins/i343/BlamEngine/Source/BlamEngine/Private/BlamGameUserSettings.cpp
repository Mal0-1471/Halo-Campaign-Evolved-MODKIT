#include "BlamGameUserSettings.h"

UBlamGameUserSettings::UBlamGameUserSettings() {
    this->SubtitlesEnabled = 1;
    this->SubtitleFriendlySpeakerColor = TEXT("WhiteBlack");
    this->SubtitleEnemySpeakerColor = TEXT("WhiteBlack");
    this->SubtitleNeutralSpeakerColor = TEXT("WhiteBlack");
    this->SubtitleDialogueColor = TEXT("WhiteBlack");
    this->SubtitleFontWeight = TEXT("Regular");
    this->SubtitleLetterSpacing = 0.80f;
    this->SubtitleLineSpacing = 1.50f;
    this->SubtitleTextCaps = TEXT("Speaker");
    this->SubtitleBackingColor = TEXT("Black");
    this->SubtitleBackingOpacity = 0.60f;
    this->ColorCorrectionFilter = EColorVisionDeficiency::NormalVision;
    this->ColorCorrectionStrength = 0.50f;
    this->ColorCorrectionBrightness = 0.50f;
    this->ColorCorrectionContrast = 0.20f;
    this->bTutorialTips = true;
    this->bObjectiveHints = true;
    this->bAnimatedMenuBackground = true;
    this->bFlashingEffects = true;
    this->bScreenShake = true;
    this->bMotionBlur = true;
    this->FrontendBackerOpacity = 0.10f;
    this->IngameBackerOpacity = 0.70f;
    this->CrosshairSize = 1.00f;
    this->CrosshairOverEnemyColor = TEXT("Default");
    this->CrosshairOverFriendlyColor = TEXT("Default");
    this->CrosshairOutlineOpacity = 0.00f;
    this->CrosshairOutlineThickness = 0.50f;
    this->bHitMarkersEnabled = true;
    this->HUDWidgetScaling = 1.00f;
    this->HUDBackingOpacity = 0.00f;
    this->bHUDParallax = true;
    this->HUDGlitch = 1.00f;
    this->DamageScreenEffectsOpacity = 1.00f;
    this->bChromaticAberration = true;
    this->DirectionalDamageIndicatorsOpacity = 1.00f;
    this->NavigationPointSize = 1.00f;
    this->NavigationPointOpacity = 1.00f;
    this->TeammateMarkerSize = 1.00f;
    this->TeammateMarkerOpacity = 1.00f;
    this->bAllowInCoop = false;
    this->ModifierPreset = EModifierPresetSetting::None;
    this->bFriendlyFire = false;
    this->FieldOfView = 85;
    this->FieldOfView3rdPerson = 85;
    this->bHUDVisible = true;
    this->HUDOpacity = 1.00f;
    this->HUDLayout = EHudLayoutSetting::MotionTrackerUpperRight;
    this->bFPSCounter = false;
    this->DistanceUnits = EHudNavpointDistanceUnitsSetting::Meters;
    this->bGoreBloodEnabled = true;
    this->MeleeWeaponOffsetHorizontal = 0;
    this->MeleeWeaponOffsetVertical = 0;
    this->MeleeWeaponOffsetDepth = 0;
    this->PistolOffsetHorizontal = 0;
    this->PistolOffsetVertical = 0;
    this->PistolOffsetDepth = 0;
    this->RifleOffsetHorizontal = 0;
    this->RifleOffsetVertical = 0;
    this->RifleOffsetDepth = 0;
    this->HeavyWeaponOffsetHorizontal = 0;
    this->HeavyWeaponOffsetVertical = 0;
    this->HeavyWeaponOffsetDepth = 0;
    this->HDR = 1000;
    this->Contrast = 0.00f;
    this->Brightness = 0.00f;
    this->bVSync = true;
    this->bAsyncCompute = true;
    this->FrameRate = EVideoFramerateSetting::FPS60;
    this->bFrameGeneration = false;
    this->LowLatencyMode = EVideoLowLatencyMode::Default;
    this->MinimumFrameRate = 30;
    this->MaximumFrameRate = -1;
    this->AspectRatio = EVideoAspectRatioSetting::AspectRatio169;
    this->bBorderlessFullscreen = true;
    this->ResolutionScale = 1.00f;
    this->Upscaler = EVideoUpscalerSetting::TSR;
    this->QualityPreset = EVideoQualitySetting::Ultra;
    this->SwapChainProvider = EVideoSwapChainProvider::None;
    this->UpscalingQuality = EVideoUpscalingQualitySetting::Ultra;
    this->TextureQuality = EVideoQualitySetting::Ultra;
    this->GeometryQuality = EVideoQualitySetting::Ultra;
    this->ReflectionsQuality = EVideoQualitySetting::Ultra;
    this->GlobalIlluminationQuality = EVideoQualitySetting::Ultra;
    this->LightingQuality = EVideoQualitySetting::Ultra;
    this->EffectsQuality = EVideoQualitySetting::Ultra;
    this->AtmosphericsQuality = EVideoQualitySetting::Ultra;
    this->PostprocessingQuality = EVideoQualitySetting::Ultra;
    this->MouseLookSensitivity = 2.20f;
    this->MouseLookSensitivityHorizontal = 1.00f;
    this->MouseLookSensitivityVertical = 1.00f;
    this->bMouseSmoothingEnabled = false;
    this->bMouseAccelerationEnabled = false;
    this->MouseAccelerationScale = 0.00f;
    this->MouseAccelerationMinRate = 0.00f;
    this->MouseAccelerationMaxRate = 100.00f;
    this->MouseAccelerationExp = 0.00f;
    this->bMouseKeyboardInvertX = false;
    this->bMouseKeyboardInvertY = false;
    this->bMouseKeyboardFlightInvertX = false;
    this->bMouseKeyboardFlightInvertY = false;
    this->MouseKeyboardWarthogDrivingMode = EBlamDrivingMode::DriverBased;
    this->bMouseKeyboardHoldToCrouch = false;
    this->ControllerWarthogDrivingMode = EBlamDrivingMode::AimBased;
    this->bControllerHoldToCrouch = false;
    this->bControllerAutoLookCentering = false;
    this->bControllerAimMagnetism = true;
    this->ControllerLookSensitivityHorizontal = EBlamLookSensitivity::LookSensitivity30;
    this->ControllerLookSensitivityVertical = EBlamLookSensitivity::LookSensitivity30;
    this->ControllerThumbstickLayout = EBlamJoystickPresets::Standard;
    this->ControllerLookAxialDeadZone = 12.00f;
    this->ControllerLookRadialDeadZone = 12.00f;
    this->ControllerLookAcceleration = EBlamLookAcceleration::LookAcceleration5;
    this->bControllerInvertX = false;
    this->bControllerInvertY = false;
    this->bControllerFlightInvertX = false;
    this->bControllerFlightInvertY = false;
    this->ControllerVibration = 0.80f;
    this->bControllerTriggerEffectsEnabled = true;
    this->bControllerLightEffectsEnabled = true;
    this->bControllerSpeaker = true;
    this->VolumeControllerSpeaker = 1.00f;
}

void UBlamGameUserSettings::SetVSync(bool bNewValue) {
}

void UBlamGameUserSettings::SetVolumeControllerSpeaker(float NewValue) {
}

void UBlamGameUserSettings::SetUpscalingQualitySetting(EVideoUpscalingQualitySetting NewValue) {
}

void UBlamGameUserSettings::SetUpscaler(EVideoUpscalerSetting NewValue) {
}

void UBlamGameUserSettings::SetTextureQualitySetting(EVideoQualitySetting NewValue) {
}

void UBlamGameUserSettings::SetSelectedKBMInputMappingPreset(const FString& NewKBMInputMappingPreset) {
}

void UBlamGameUserSettings::SetSelectedControllerInputMappingPreset(const FString& NewControllerInputMappingPreset) {
}

void UBlamGameUserSettings::SetScreenShake(bool NewValue) {
}

void UBlamGameUserSettings::SetRifleOffsetVertical(int32 NewValue) {
}

void UBlamGameUserSettings::SetRifleOffsetHorizontal(int32 NewValue) {
}

void UBlamGameUserSettings::SetRifleOffsetDepth(int32 NewValue) {
}

void UBlamGameUserSettings::SetResolutionScale(float NewValue) {
}

void UBlamGameUserSettings::SetReflectionsQualitySetting(EVideoQualitySetting NewValue) {
}

void UBlamGameUserSettings::SetQualityPreset(EVideoQualitySetting NewValue) {
}

void UBlamGameUserSettings::SetPostprocessingQualitySetting(EVideoQualitySetting NewValue) {
}

void UBlamGameUserSettings::SetPistolOffsetVertical(int32 NewValue) {
}

void UBlamGameUserSettings::SetPistolOffsetHorizontal(int32 NewValue) {
}

void UBlamGameUserSettings::SetPistolOffsetDepth(int32 NewValue) {
}

void UBlamGameUserSettings::SetMouseSmoothingEnabled(bool bNewValue) {
}

void UBlamGameUserSettings::SetMouseLookSensitivityVertical(float NewValue) {
}

void UBlamGameUserSettings::SetMouseLookSensitivityHorizontal(float NewValue) {
}

void UBlamGameUserSettings::SetMouseLookSensitivity(float NewValue) {
}

void UBlamGameUserSettings::SetMouseKeyboardWarthogDrivingMode(EBlamDrivingMode NewValue) {
}

void UBlamGameUserSettings::SetMouseKeyboardInvertY(bool bNewValue) {
}

void UBlamGameUserSettings::SetMouseKeyboardInvertX(bool bNewValue) {
}

void UBlamGameUserSettings::SetMouseKeyboardHoldToCrouch(bool bNewValue) {
}

void UBlamGameUserSettings::SetMouseKeyboardFlightInvertY(bool bNewValue) {
}

void UBlamGameUserSettings::SetMouseKeyboardFlightInvertX(bool bNewValue) {
}

void UBlamGameUserSettings::SetMouseAccelerationScale(float NewValue) {
}

void UBlamGameUserSettings::SetMouseAccelerationMinRate(float NewValue) {
}

void UBlamGameUserSettings::SetMouseAccelerationMaxRate(float NewValue) {
}

void UBlamGameUserSettings::SetMouseAccelerationExp(float NewValue) {
}

void UBlamGameUserSettings::SetMouseAccelerationEnabled(bool bNewValue) {
}

void UBlamGameUserSettings::SetMotionBlur(bool NewValue) {
}

void UBlamGameUserSettings::SetMeleeWeaponOffsetVertical(int32 NewValue) {
}

void UBlamGameUserSettings::SetMeleeWeaponOffsetHorizontal(int32 NewValue) {
}

void UBlamGameUserSettings::SetMeleeWeaponOffsetDepth(int32 NewValue) {
}

void UBlamGameUserSettings::SetMaximumFrameRate(int32 NewValue) {
}

void UBlamGameUserSettings::SetLightingQualitySetting(EVideoQualitySetting NewValue) {
}

void UBlamGameUserSettings::SetHeavyWeaponOffsetVertical(int32 NewValue) {
}

void UBlamGameUserSettings::SetHeavyWeaponOffsetHorizontal(int32 NewValue) {
}

void UBlamGameUserSettings::SetHeavyWeaponOffsetDepth(int32 NewValue) {
}

void UBlamGameUserSettings::SetHDR(int32 NewValue) {
}

void UBlamGameUserSettings::SetGlobalIlluminationQualitySetting(EVideoQualitySetting NewValue) {
}

void UBlamGameUserSettings::SetGeometryQualitySetting(EVideoQualitySetting NewValue) {
}

void UBlamGameUserSettings::SetFrameGeneration(bool bNewValue) {
}

void UBlamGameUserSettings::SetEffectsQualitySetting(EVideoQualitySetting NewValue) {
}

void UBlamGameUserSettings::SetControllerWarthogDrivingMode(EBlamDrivingMode NewValue) {
}

void UBlamGameUserSettings::SetControllerVibration(float NewValue) {
}

void UBlamGameUserSettings::SetControllerTriggerEffectsEnabled(bool bNewValue) {
}

void UBlamGameUserSettings::SetControllerThumbstickLayout(EBlamJoystickPresets NewValue) {
}

void UBlamGameUserSettings::SetControllerSpeaker(bool NewValue) {
}

void UBlamGameUserSettings::SetControllerLookSensitivityVertical(EBlamLookSensitivity NewValue) {
}

void UBlamGameUserSettings::SetControllerLookSensitivityHorizontal(EBlamLookSensitivity NewValue) {
}

void UBlamGameUserSettings::SetControllerLookRadialDeadZone(float NewValue) {
}

void UBlamGameUserSettings::SetControllerLookAxialDeadZone(float NewValue) {
}

void UBlamGameUserSettings::SetControllerLookAcceleration(EBlamLookAcceleration NewValue) {
}

void UBlamGameUserSettings::SetControllerLightEffectsEnabled(bool bNewValue) {
}

void UBlamGameUserSettings::SetControllerInvertY(bool bNewValue) {
}

void UBlamGameUserSettings::SetControllerInvertX(bool bNewValue) {
}

void UBlamGameUserSettings::SetControllerHoldToCrouch(bool bNewValue) {
}

void UBlamGameUserSettings::SetControllerFlightInvertY(bool bNewValue) {
}

void UBlamGameUserSettings::SetControllerFlightInvertX(bool bNewValue) {
}

void UBlamGameUserSettings::SetControllerAutoLookCentering(bool bNewValue) {
}

void UBlamGameUserSettings::SetControllerAimMagnetism(bool bNewValue) {
}

void UBlamGameUserSettings::SetBorderlessFullscreenEnabled(bool bNewValue) {
}

void UBlamGameUserSettings::SetAtmosphericsQualitySetting(EVideoQualitySetting NewValue) {
}

bool UBlamGameUserSettings::GetVSyncEnabled() const {
    return false;
}

float UBlamGameUserSettings::GetVolumeControllerSpeaker() const {
    return 0.0f;
}

EVideoUpscalingQualitySetting UBlamGameUserSettings::GetUpscalingQualitySetting() const {
    return EVideoUpscalingQualitySetting::Low;
}

EVideoUpscalerSetting UBlamGameUserSettings::GetUpscaler() const {
    return EVideoUpscalerSetting::TSR;
}

EVideoQualitySetting UBlamGameUserSettings::GetTextureQualitySetting() const {
    return EVideoQualitySetting::VeryLow;
}

FString UBlamGameUserSettings::GetSelectedKBMInputMappingPreset() const {
    return TEXT("");
}

FString UBlamGameUserSettings::GetSelectedControllerInputMappingPreset() const {
    return TEXT("");
}

bool UBlamGameUserSettings::GetScreenShake() const {
    return false;
}

int32 UBlamGameUserSettings::GetRifleOffsetVertical() const {
    return 0;
}

int32 UBlamGameUserSettings::GetRifleOffsetHorizontal() const {
    return 0;
}

int32 UBlamGameUserSettings::GetRifleOffsetDepth() const {
    return 0;
}

float UBlamGameUserSettings::GetResolutionScale() const {
    return 0.0f;
}

EVideoQualitySetting UBlamGameUserSettings::GetReflectionsQualitySetting() const {
    return EVideoQualitySetting::VeryLow;
}

EVideoQualitySetting UBlamGameUserSettings::GetQualityPreset() const {
    return EVideoQualitySetting::VeryLow;
}

EVideoQualitySetting UBlamGameUserSettings::GetPostprocessingQualitySetting() const {
    return EVideoQualitySetting::VeryLow;
}

int32 UBlamGameUserSettings::GetPistolOffsetVertical() const {
    return 0;
}

int32 UBlamGameUserSettings::GetPistolOffsetHorizontal() const {
    return 0;
}

int32 UBlamGameUserSettings::GetPistolOffsetDepth() const {
    return 0;
}

bool UBlamGameUserSettings::GetMouseSmoothingEnabled() const {
    return false;
}

float UBlamGameUserSettings::GetMouseLookSensitivityVertical() const {
    return 0.0f;
}

float UBlamGameUserSettings::GetMouseLookSensitivityHorizontal() const {
    return 0.0f;
}

float UBlamGameUserSettings::GetMouseLookSensitivity() const {
    return 0.0f;
}

EBlamDrivingMode UBlamGameUserSettings::GetMouseKeyboardWarthogDrivingMode() const {
    return EBlamDrivingMode::AimBased;
}

bool UBlamGameUserSettings::GetMouseKeyboardInvertY() const {
    return false;
}

bool UBlamGameUserSettings::GetMouseKeyboardInvertX() const {
    return false;
}

bool UBlamGameUserSettings::GetMouseKeyboardHoldToCrouch() const {
    return false;
}

bool UBlamGameUserSettings::GetMouseKeyboardFlightInvertY() const {
    return false;
}

bool UBlamGameUserSettings::GetMouseKeyboardFlightInvertX() const {
    return false;
}

float UBlamGameUserSettings::GetMouseAccelerationScale() const {
    return 0.0f;
}

float UBlamGameUserSettings::GetMouseAccelerationMinRate() const {
    return 0.0f;
}

float UBlamGameUserSettings::GetMouseAccelerationMaxRate() const {
    return 0.0f;
}

float UBlamGameUserSettings::GetMouseAccelerationExp() const {
    return 0.0f;
}

bool UBlamGameUserSettings::GetMouseAccelerationEnabled() const {
    return false;
}

bool UBlamGameUserSettings::GetMotionBur() const {
    return false;
}

int32 UBlamGameUserSettings::GetMeleeWeaponOffsetVertical() const {
    return 0;
}

int32 UBlamGameUserSettings::GetMeleeWeaponOffsetHorizontal() const {
    return 0;
}

int32 UBlamGameUserSettings::GetMeleeWeaponOffsetDepth() const {
    return 0;
}

int32 UBlamGameUserSettings::GetMaximumFrameRate() const {
    return 0;
}

EVideoQualitySetting UBlamGameUserSettings::GetLightingQualitySetting() const {
    return EVideoQualitySetting::VeryLow;
}

bool UBlamGameUserSettings::GetHudVisible() const {
    return false;
}

int32 UBlamGameUserSettings::GetHeavyWeaponOffsetVertical() const {
    return 0;
}

int32 UBlamGameUserSettings::GetHeavyWeaponOffsetHorizontal() const {
    return 0;
}

int32 UBlamGameUserSettings::GetHeavyWeaponOffsetDepth() const {
    return 0;
}

int32 UBlamGameUserSettings::GetHDR() const {
    return 0;
}

EVideoQualitySetting UBlamGameUserSettings::GetGlobalIlluminationQualitySetting() const {
    return EVideoQualitySetting::VeryLow;
}

EVideoQualitySetting UBlamGameUserSettings::GetGeometryQualitySetting() const {
    return EVideoQualitySetting::VeryLow;
}

EVideoFramerateSetting UBlamGameUserSettings::GetFrameRate() const {
    return EVideoFramerateSetting::FPS30;
}

bool UBlamGameUserSettings::GetFrameGeneration() const {
    return false;
}

EVideoQualitySetting UBlamGameUserSettings::GetEffectsQualitySetting() const {
    return EVideoQualitySetting::VeryLow;
}

EBlamDrivingMode UBlamGameUserSettings::GetControllerWarthogDrivingMode() const {
    return EBlamDrivingMode::AimBased;
}

float UBlamGameUserSettings::GetControllerVibration() const {
    return 0.0f;
}

bool UBlamGameUserSettings::GetControllerTriggerEffectsEnabled() const {
    return false;
}

EBlamJoystickPresets UBlamGameUserSettings::GetControllerThumbstickLayout() const {
    return EBlamJoystickPresets::Standard;
}

bool UBlamGameUserSettings::GetControllerSpeaker() const {
    return false;
}

EBlamLookSensitivity UBlamGameUserSettings::GetControllerLookSensitivityVertical() const {
    return EBlamLookSensitivity::LookSensitivity00;
}

EBlamLookSensitivity UBlamGameUserSettings::GetControllerLookSensitivityHorizontal() const {
    return EBlamLookSensitivity::LookSensitivity00;
}

float UBlamGameUserSettings::GetControllerLookRadialDeadZone() const {
    return 0.0f;
}

float UBlamGameUserSettings::GetControllerLookAxialDeadZone() const {
    return 0.0f;
}

EBlamLookAcceleration UBlamGameUserSettings::GetControllerLookAcceleration() const {
    return EBlamLookAcceleration::LookAcceleration0;
}

bool UBlamGameUserSettings::GetControllerLightEffectsEnabled() const {
    return false;
}

bool UBlamGameUserSettings::GetControllerInvertY() const {
    return false;
}

bool UBlamGameUserSettings::GetControllerInvertX() const {
    return false;
}

bool UBlamGameUserSettings::GetControllerHoldToCrouch() const {
    return false;
}

bool UBlamGameUserSettings::GetControllerFlightInvertY() const {
    return false;
}

bool UBlamGameUserSettings::GetControllerFlightInvertX() const {
    return false;
}

bool UBlamGameUserSettings::GetControllerAutoLookCentering() const {
    return false;
}

bool UBlamGameUserSettings::GetControllerAimMagnetism() const {
    return false;
}

bool UBlamGameUserSettings::GetBorderlessFullscreenEnabled() const {
    return false;
}

EVideoQualitySetting UBlamGameUserSettings::GetAtmosphericsQualitySetting() const {
    return EVideoQualitySetting::VeryLow;
}

FGameplayTag UBlamGameUserSettings::FindCustomizationMatching(FGameplayTag CustomizationToMatch) const {
    return FGameplayTag{};
}

void UBlamGameUserSettings::ApplyVisualLanguage() {
}

void UBlamGameUserSettings::AddOrReplaceCustomization(FGameplayTag CustomizationToReplace, FGameplayTag NewSelection) {
}


