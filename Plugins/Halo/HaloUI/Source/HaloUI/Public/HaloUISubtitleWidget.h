#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "GameplayTagContainer.h"
#include "EHaloUISubtitleCaps.h"
#include "HaloUIShowSubtitle.h"
#include "HaloUISubtitleModeStyle.h"
#include "HaloUISubtitleSpeakerColor.h"
#include "HaloUIUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HaloUISubtitleWidget.generated.h"

class UCommonBorderStyle;
class UCommonTextStyle;
class UHaloUIBorder;
class UHaloUISubtitleLineWidget;
class UHaloUISubtitleModeData;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUISubtitleWidget : public UHaloUIUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> TextStyleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonBorderStyle> BorderStyleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHaloUISubtitleModeData> DefaultModeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EditorOnlyFallbackWidgetWidthForTextWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParentContainerLevelToUseForTextWrap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHaloUISubtitleLineWidget*> LineWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUISubtitleLineWidget* LineWidgetForBuildingStrings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUIBorder* Background;
    
public:
    UHaloUISubtitleWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTextCapsByString(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateTextCaps(const EHaloUISubtitleCaps Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSpeakerColor(const FHaloUISubtitleSpeakerColor& Color);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLineSpacing(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLetterSpacing(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFontWeight(const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDialogueMatchesSpeakerColor(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDialogueColor(const FColor Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBackingOpacity(const float Value);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBackingColor(const FColor Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDefaultModeData(const TSubclassOf<UHaloUISubtitleModeData> InModeData);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void HandleUpdateModeData(const FHaloUISubtitleModeStyle& NewModeData, const FGameplayTag CurrentMode);
    
    UFUNCTION(BlueprintCallable)
    void HandleShowSubtitle(FHaloUIShowSubtitle ShowSubtitleData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UHaloUISubtitleModeData> GetDefaultModeData() const;
    
};

