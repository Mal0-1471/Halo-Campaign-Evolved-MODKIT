#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
#include "HaloUISubtitleFont.h"
#include "HaloUISubtitleFontWeight.h"
#include "TextScalingSetting.h"
#include "HaloUIDeveloperSettings.generated.h"

class UHaloUIActivatableWidget;
class UHaloUILoadingScreenBase;
class UHaloUINarrationTextureDataTable;
class UHaloUINumericTextBlockStyle;
class UHaloUIScrollBarStyle;
class UHaloUISliderStyle;
class UHaloUISoundBase;
class UHaloUITextEntryStyle;
class UObject;
class UTexture2D;

UCLASS(Blueprintable, DefaultConfig, Config=HaloUI)
class HALOUI_API UHaloUIDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHaloUILoadingScreenBase> LoadingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadingScreenAutoCloseOnLoadFinished;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoadingScreenMinimumDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoadingScreenTexturePath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowNonBlockingLoadScreenAfterBlockingLoad;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHaloUIActivatableWidget> NonBlockingLoadScreenClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonBlockingLoadScreenMinimumDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHaloUIScrollBarStyle> DefaultScrollBarStyleClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHaloUINumericTextBlockStyle> DefaultNumericTextBlockStyleClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHaloUISliderStyle> DefaultSliderStyleClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHaloUITextEntryStyle> DefaultTextEntryStyleClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIUnitsBetweenTesselationDivisions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> UnmappedActionTexture;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUINarrationTextureDataTable> NarrationTextureDataTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> ButtonNavigatedSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> NavigationDeniedSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> ButtonPressedSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> ButtonClickedSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> ButtonHoveredSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> WidgetBackedOutSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> BoundActionSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> ToggleOnSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> ToggleOffSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> TreeExpandSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> TreeCollapseSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> SliderIncreaseSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> SliderDecreaseSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHaloUISoundBase> SliderDeniedSound;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextScalingSetting> TextScalingSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHaloUISubtitleFontWeight> SubtitleFontWeights;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHaloUISubtitleFont> SubtitleFonts;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SubtitleTextSizeCategory;
    
public:
    UHaloUIDeveloperSettings();

    UFUNCTION(BlueprintCallable)
    void SetUnmappedActionTexture(const TSoftObjectPtr<UTexture2D>& InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetUIUnitsBetweenTesselationDivisions(float InUnits);
    
    UFUNCTION(BlueprintCallable)
    void SetShowNonBlockingLoadScreenAfterBlockingLoad(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNonBlockingLoadScreenMinimumDisplayTime(const float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNonBlockingLoadScreenClass(TSoftClassPtr<UHaloUIActivatableWidget> InClass);
    
    UFUNCTION(BlueprintCallable)
    void SetNarrationTextureDataTable(const TSoftObjectPtr<UHaloUINarrationTextureDataTable>& InTable);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingScreenTexturePath(const FName& InTexturePath);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingScreenMinimumDisplayTime(const float MinimumDisplayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingScreenClass(TSoftClassPtr<UHaloUILoadingScreenBase> InClass);
    
    UFUNCTION(BlueprintCallable)
    void SetLoadingScreenAutoCloseOnLoadFinished(const bool bAutoCloseOnLoadFinished);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultTextEntryStyleClass(TSoftClassPtr<UHaloUITextEntryStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSliderStyleClass(TSoftClassPtr<UHaloUISliderStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultScrollBarStyleClass(TSoftClassPtr<UHaloUIScrollBarStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultNumericTextBlockStyleClass(TSoftClassPtr<UHaloUINumericTextBlockStyle> InStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetWidgetBackedOutSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetUnmappedActionTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetUnmappedActionBrush() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUIUnitsBetweenTesselationDivisions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetTreeExpandSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetTreeCollapseSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetToggleOnSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetToggleOffSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTextScalingSetting> GetTextScalingSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSubtitleTextSizeCategory() const;
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetSubtitleFontWeightGameplayTagFromTagName(const FString& FontWeightTagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSubtitleFontWeightForGameplayTag(const FGameplayTag& FontWeightTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetSubtitleFontForGameplayTag(const FGameplayTag& FontTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetSliderIncreaseSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetSliderDeniedSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetSliderDecreaseSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShowNonBlockingLoadScreenAfterBlockingLoad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNonBlockingLoadScreenMinimumDisplayTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UHaloUIActivatableWidget> GetNonBlockingLoadScreenClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetNavigationDeniedSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUINarrationTextureDataTable* GetNarrationTextureDataTableAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UHaloUINarrationTextureDataTable> GetNarrationTextureDataTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLoadingScreenTexturePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLoadingScreenMinimumDisplayTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UHaloUILoadingScreenBase> GetLoadingScreenClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoadingScreenAutoCloseOnLoadFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UHaloUITextEntryStyle> GetDefaultTextEntryStyleClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UHaloUISliderStyle> GetDefaultSliderStyleClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UHaloUIScrollBarStyle> GetDefaultScrollBarStyleClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UHaloUINumericTextBlockStyle> GetDefaultNumericTextBlockStyleClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetButtonPressedSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetButtonNavigatedSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetButtonHoveredSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetButtonClickedSound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUISoundBase* GetBoundActionSound() const;
    
};

