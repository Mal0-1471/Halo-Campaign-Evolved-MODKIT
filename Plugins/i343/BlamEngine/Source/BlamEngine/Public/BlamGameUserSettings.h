#pragma once
#include "CoreMinimal.h"
#include "BlamGameEnginePlayerTraits.h"
#include "EBlamDrivingMode.h"
#include "EBlamJoystickPresets.h"
#include "EBlamLookAcceleration.h"
#include "EBlamLookSensitivity.h"
#include "GameplayTagContainer.h"
#include "HaloUserSettings.h"
#include "Rendering/RenderingCommon.h"
#include "BlamCustomMappingContext.h"
#include "BlamGameUserSettingsUpdatedDelegate.h"
#include "EHudLayoutSetting.h"
#include "EHudNavpointDistanceUnitsSetting.h"
#include "EModifierPresetSetting.h"
#include "EVideoAspectRatioSetting.h"
#include "EVideoFramerateSetting.h"
#include "EVideoLowLatencyMode.h"
#include "EVideoQualitySetting.h"
#include "EVideoSwapChainProvider.h"
#include "EVideoUpscalerSetting.h"
#include "EVideoUpscalingQualitySetting.h"
#include "BlamGameUserSettings.generated.h"

UCLASS(Abstract, Blueprintable, Config=Engine)
class BLAMENGINE_API UBlamGameUserSettings : public UHaloUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameUserSettingsUpdated OnBlamSettingsUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubtitlesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubtitleFriendlySpeakerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubtitleEnemySpeakerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubtitleNeutralSpeakerColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubtitleDialogueColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubtitleFontWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubtitleLetterSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubtitleLineSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubtitleTextCaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubtitleBackingColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubtitleBackingOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorVisionDeficiency ColorCorrectionFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorCorrectionStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorCorrectionBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorCorrectionContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTutorialTips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObjectiveHints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShowingHUDObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShowingHUDBanners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ShowingMenuToasts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimatedMenuBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlashingEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScreenShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontendBackerOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IngameBackerOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CrosshairColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CrosshairOverEnemyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CrosshairOverFriendlyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairOutlineOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrosshairOutlineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitMarkersEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HUDWidgetScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HUDBackingOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MotionTrackerEnemyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MotionTrackerFriendlyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHUDParallax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HUDGlitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageScreenEffectsOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChromaticAberration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionalDamageIndicatorsOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DirectionalDamageIndicatorsColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationPointSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationPointOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NavigationPointColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeammateMarkerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeammateMarkerOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TeammateMarkerColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedControllerInputMappingPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedKBMInputMappingPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInCoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModifierPresetSetting ModifierPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameEnginePlayerTraits PlayerTraits1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameEnginePlayerTraits PlayerTraits2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameEnginePlayerTraits PlayerTraits3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameEnginePlayerTraits PlayerTraits4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFriendlyFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FieldOfView3rdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHUDVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HUDOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HUDAnchoring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHudLayoutSetting HUDLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFPSCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHudNavpointDistanceUnitsSetting DistanceUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGoreBloodEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeleeWeaponOffsetHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeleeWeaponOffsetVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeleeWeaponOffsetDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PistolOffsetHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PistolOffsetVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PistolOffsetDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RifleOffsetHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RifleOffsetVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RifleOffsetDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeavyWeaponOffsetHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeavyWeaponOffsetVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeavyWeaponOffsetDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HDR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Contrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAsyncCompute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoFramerateSetting FrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFrameGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoLowLatencyMode LowLatencyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumFrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumFrameRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Monitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoAspectRatioSetting AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBorderlessFullscreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoUpscalerSetting Upscaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoQualitySetting QualityPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoSwapChainProvider SwapChainProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoUpscalingQualitySetting UpscalingQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoQualitySetting TextureQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoQualitySetting GeometryQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoQualitySetting ReflectionsQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoQualitySetting GlobalIlluminationQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoQualitySetting LightingQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoQualitySetting EffectsQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoQualitySetting AtmosphericsQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVideoQualitySetting PostprocessingQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VisualLanguage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseLookSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseLookSensitivityHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseLookSensitivityVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseSmoothingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseAccelerationEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseAccelerationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseAccelerationMinRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseAccelerationMaxRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseAccelerationExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseKeyboardInvertX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseKeyboardInvertY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseKeyboardFlightInvertX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseKeyboardFlightInvertY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamDrivingMode MouseKeyboardWarthogDrivingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseKeyboardHoldToCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamDrivingMode ControllerWarthogDrivingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerHoldToCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerAutoLookCentering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerAimMagnetism;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamLookSensitivity ControllerLookSensitivityHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamLookSensitivity ControllerLookSensitivityVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamJoystickPresets ControllerThumbstickLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerLookAxialDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerLookRadialDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamLookAcceleration ControllerLookAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerInvertX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerInvertY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerFlightInvertX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerFlightInvertY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerVibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerTriggerEffectsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerLightEffectsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerSpeaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeControllerSpeaker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamCustomMappingContext CustomInputMappingGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamCustomMappingContext CustomInputMappingKBM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ObjectCustomizationNames;
    
public:
    UBlamGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void SetVSync(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeControllerSpeaker(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscalingQualitySetting(EVideoUpscalingQualitySetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUpscaler(EVideoUpscalerSetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureQualitySetting(EVideoQualitySetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedKBMInputMappingPreset(const FString& NewKBMInputMappingPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedControllerInputMappingPreset(const FString& NewControllerInputMappingPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetScreenShake(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRifleOffsetVertical(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRifleOffsetHorizontal(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRifleOffsetDepth(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetResolutionScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetReflectionsQualitySetting(EVideoQualitySetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetQualityPreset(EVideoQualitySetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPostprocessingQualitySetting(EVideoQualitySetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPistolOffsetVertical(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPistolOffsetHorizontal(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetPistolOffsetDepth(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSmoothingEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseLookSensitivityVertical(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseLookSensitivityHorizontal(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseLookSensitivity(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseKeyboardWarthogDrivingMode(EBlamDrivingMode NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseKeyboardInvertY(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseKeyboardInvertX(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseKeyboardHoldToCrouch(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseKeyboardFlightInvertY(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseKeyboardFlightInvertX(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseAccelerationScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseAccelerationMinRate(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseAccelerationMaxRate(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseAccelerationExp(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseAccelerationEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionBlur(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeleeWeaponOffsetVertical(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeleeWeaponOffsetHorizontal(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMeleeWeaponOffsetDepth(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumFrameRate(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLightingQualitySetting(EVideoQualitySetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHeavyWeaponOffsetVertical(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHeavyWeaponOffsetHorizontal(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHeavyWeaponOffsetDepth(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHDR(int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalIlluminationQualitySetting(EVideoQualitySetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGeometryQualitySetting(EVideoQualitySetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameGeneration(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectsQualitySetting(EVideoQualitySetting NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerWarthogDrivingMode(EBlamDrivingMode NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerVibration(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerTriggerEffectsEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerThumbstickLayout(EBlamJoystickPresets NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerSpeaker(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLookSensitivityVertical(EBlamLookSensitivity NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLookSensitivityHorizontal(EBlamLookSensitivity NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLookRadialDeadZone(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLookAxialDeadZone(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLookAcceleration(EBlamLookAcceleration NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerLightEffectsEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerInvertY(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerInvertX(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerHoldToCrouch(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerFlightInvertY(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerFlightInvertX(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerAutoLookCentering(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerAimMagnetism(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderlessFullscreenEnabled(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAtmosphericsQualitySetting(EVideoQualitySetting NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVSyncEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolumeControllerSpeaker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVideoUpscalingQualitySetting GetUpscalingQualitySetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVideoUpscalerSetting GetUpscaler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVideoQualitySetting GetTextureQualitySetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSelectedKBMInputMappingPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSelectedControllerInputMappingPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetScreenShake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRifleOffsetVertical() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRifleOffsetHorizontal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRifleOffsetDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetResolutionScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVideoQualitySetting GetReflectionsQualitySetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVideoQualitySetting GetQualityPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVideoQualitySetting GetPostprocessingQualitySetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPistolOffsetVertical() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPistolOffsetHorizontal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPistolOffsetDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseSmoothingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseLookSensitivityVertical() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseLookSensitivityHorizontal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseLookSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamDrivingMode GetMouseKeyboardWarthogDrivingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseKeyboardInvertY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseKeyboardInvertX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseKeyboardHoldToCrouch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseKeyboardFlightInvertY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseKeyboardFlightInvertX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseAccelerationScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseAccelerationMinRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseAccelerationMaxRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMouseAccelerationExp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseAccelerationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMotionBur() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeleeWeaponOffsetVertical() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeleeWeaponOffsetHorizontal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeleeWeaponOffsetDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaximumFrameRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVideoQualitySetting GetLightingQualitySetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHudVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeavyWeaponOffsetVertical() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeavyWeaponOffsetHorizontal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHeavyWeaponOffsetDepth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHDR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVideoQualitySetting GetGlobalIlluminationQualitySetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVideoQualitySetting GetGeometryQualitySetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVideoFramerateSetting GetFrameRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFrameGeneration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVideoQualitySetting GetEffectsQualitySetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamDrivingMode GetControllerWarthogDrivingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerVibration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerTriggerEffectsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamJoystickPresets GetControllerThumbstickLayout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerSpeaker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamLookSensitivity GetControllerLookSensitivityVertical() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamLookSensitivity GetControllerLookSensitivityHorizontal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerLookRadialDeadZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerLookAxialDeadZone() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamLookAcceleration GetControllerLookAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerLightEffectsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerInvertY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerInvertX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerHoldToCrouch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerFlightInvertY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerFlightInvertX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerAutoLookCentering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetControllerAimMagnetism() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBorderlessFullscreenEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVideoQualitySetting GetAtmosphericsQualitySetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag FindCustomizationMatching(FGameplayTag CustomizationToMatch) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyVisualLanguage();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddOrReplaceCustomization(FGameplayTag CustomizationToReplace, FGameplayTag NewSelection);
    
};

