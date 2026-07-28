#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "EHaloUINarrationReadOutMode.h"
#include "EHaloUINarrationReadOutPriority.h"
#include "ENarrationWidgetType.h"
#include "HaloUIButtonPressedDelegate.h"
#include "HaloUIButtonState.h"
#include "HaloUIButtonTextProperties.h"
#include "HaloUIButtonTextPropertiesOptional.h"
#include "HaloUIMaterialAnimator.h"
#include "HaloUIMenuItemFilter.h"
#include "HaloUINarratableNodeBlueprintableInterface.h"
#include "HaloUINarratableNodeInterface.h"
#include "HaloUIOptionalSound.h"
#include "NarratableNodeData.h"
#include "Templates/SubclassOf.h"
#include "HaloUIButtonBase.generated.h"

class UCommonButtonStyle;
class UHaloUISoundBase;
class UHaloUITextBlock;
class UInputAction;
class UObject;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIButtonBase : public UCommonButtonBase, public IHaloUINarratableNodeInterface, public IHaloUINarratableNodeBlueprintableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldDeselectUponLosingFocus: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIButtonPressed OnHaloButtonPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound NavigatedSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound HoveredSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound PressedSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound ClickedSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUITextBlock* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIButtonTextProperties NameTextProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUITextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIButtonTextProperties DescriptionTextProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIMaterialAnimator HoverMaterialAnimator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIMaterialAnimator SelectMaterialAnimator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIMaterialAnimator PressMaterialAnimator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIMaterialAnimator DisableMaterialAnimator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAppearHoveredWhenFocused: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAppearSelectedOnlyWhenFocused: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ButtonStateChangeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* TriggeringEnhancedInputActionForAccept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNarratableNodeData NarratableNodeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENarrationWidgetType NarrationWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> ChildTextWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloUISoundBase* NavigatedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloUISoundBase* HoveredSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloUISoundBase* PressedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloUISoundBase* ClickedSound;
    
public:
    UHaloUIButtonBase();

    UFUNCTION(BlueprintCallable)
    void SetVisibilityFromFilter(int32 UserIndex, const FHaloUIMenuItemFilter& Filter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTriggeringEnhancedInputActionForAccept(UInputAction* InInputAction);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetShouldDeselectUponLosingFocus(bool bInShouldDeselectUponLosingFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedStyle(TSubclassOf<UCommonButtonStyle> OverrideStyle, TSubclassOf<UCommonButtonStyle> BaseStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetNewPressedSoundOverride(const FHaloUIOptionalSound& Override);
    
    UFUNCTION(BlueprintCallable)
    void SetNewHoveredSoundOverride(const FHaloUIOptionalSound& Override);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigatedSoundOverride(const FHaloUIOptionalSound& Override);
    
    UFUNCTION(BlueprintCallable)
    void SetNameTextProperties(const FHaloUIButtonTextProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetDescriptionTextProperties(const FHaloUIButtonTextProperties& NewProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetClickedSoundOverride(const FHaloUIOptionalSound& Override);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UCommonButtonStyle> SelectButtonStyle(TSubclassOf<UCommonButtonStyle> OverrideStyle, TSubclassOf<UCommonButtonStyle> BaseStyle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayUISound(UObject* WorldContextObject, UHaloUISoundBase* Sound, const FString& UseCase);
    
    UFUNCTION(BlueprintCallable)
    void PlayTreeExpansionSound(bool bIsExpanded);
    
    UFUNCTION(BlueprintCallable)
    void PlayToggleSound(bool bIsToggleOn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectParameterChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressParameterChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoverParameterChanged(float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisableParameterChanged(float NewValue);
    
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void OnButtonStateChanged(TEnumAsByte<HaloUIButtonState> OldButtonState, TEnumAsByte<HaloUIButtonState> NewButtonState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldDeselectUponLosingFocus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHaloUIButtonTextProperties GetNameTextProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHaloUIButtonTextProperties GetDescriptionTextProperties() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyOptionalNameTextProperties(const FHaloUIButtonTextPropertiesOptional& OptionalProperties);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOptionalDescriptionTextProperties(const FHaloUIButtonTextPropertiesOptional& OptionalProperties);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    double GetSecondsToBlockReannouncement() const override PURE_VIRTUAL(GetSecondsToBlockReannouncement, return 0.0;);
    
    UFUNCTION(BlueprintCallable)
    FText GetNarrationTextPrefix() const override PURE_VIRTUAL(GetNarrationTextPrefix, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    FText GetNarrationTextPostfix() const override PURE_VIRTUAL(GetNarrationTextPostfix, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    EHaloUINarrationReadOutPriority GetNarrationReadOutPriority() const override PURE_VIRTUAL(GetNarrationReadOutPriority, return EHaloUINarrationReadOutPriority::Maximum;);
    
    UFUNCTION(BlueprintCallable)
    EHaloUINarrationReadOutMode GetNarrationReadOutMode() const override PURE_VIRTUAL(GetNarrationReadOutMode, return EHaloUINarrationReadOutMode::Authored;);
    
    UFUNCTION(BlueprintCallable)
    bool GetNarratesOnFocus() const override PURE_VIRTUAL(GetNarratesOnFocus, return false;);
    
    UFUNCTION(BlueprintCallable)
    FNarratableNodeData GetNarratableNodeDataMutable() override PURE_VIRTUAL(GetNarratableNodeDataMutable, return FNarratableNodeData{};);
    
    UFUNCTION(BlueprintCallable)
    FNarratableNodeData GetNarratableNodeData() const override PURE_VIRTUAL(GetNarratableNodeData, return FNarratableNodeData{};);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsNodeReadyToBeRead() const override PURE_VIRTUAL(GetIsNodeReadyToBeRead, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsNarratableNode() const override PURE_VIRTUAL(GetIsNarratableNode, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsCurrentlyNarratable() const override PURE_VIRTUAL(GetIsCurrentlyNarratable, return false;);
    
};

