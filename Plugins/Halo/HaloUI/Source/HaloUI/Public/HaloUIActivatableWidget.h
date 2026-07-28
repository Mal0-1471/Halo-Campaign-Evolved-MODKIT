#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Types/SlateEnums.h"
#include "EHaloUINarrationReadOutMode.h"
#include "EHaloUINarrationReadOutPriority.h"
#include "HaloUINarratableNodeBlueprintableInterface.h"
#include "HaloUINarratableNodeInterface.h"
#include "HaloUIOptionalSound.h"
#include "InputActionBindingHandle.h"
#include "InputActionExecutedDelegateDelegate.h"
#include "NarratableNodeData.h"
#include "Templates/SubclassOf.h"
#include "HaloUIActivatableWidget.generated.h"

class UCommonActivatableWidgetContainerBase;
class UHaloUILayoutBase;
class UHaloUISoundBase;
class UInputAction;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIActivatableWidget : public UCommonActivatableWidget, public IHaloUINarratableNodeInterface, public IHaloUINarratableNodeBlueprintableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveStateWhenActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveStateWhenVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveStateUntilDisposed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloUILayoutBase* OwningLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetContainerBase* OwningLayerContainer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImplementsGetFocusableWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFocusDesiredTargetOnActivate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound BackedOutSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound BoundActionSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUIOptionalSound NavigationDeniedSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNarratableNodeData NarratableNodeData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloUISoundBase* BackedOutSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloUISoundBase* BoundActionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloUISoundBase* NavigationDeniedSound;
    
public:
    UHaloUIActivatableWidget();

    UFUNCTION(BlueprintCallable)
    void UnregisterBinding(UPARAM(Ref) FInputActionBindingHandle& BindingHandle);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAllBindings();
    
    UFUNCTION(BlueprintCallable)
    void TryMoveFocusToPreviousLayer();
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationDeniedSoundOverride(const FHaloUIOptionalSound& Override);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundActionSoundOverride(const FHaloUIOptionalSound& Override);
    
    UFUNCTION(BlueprintCallable)
    void SetBackedOutSoundOverride(const FHaloUIOptionalSound& Override);
    
    UFUNCTION(BlueprintCallable)
    FInputActionBindingHandle RegisterBinding(const UInputAction* InputAction, const FText ActionNameOverride, const bool bShouldShowInActionBar, const bool bOverrideActionSound, UHaloUISoundBase* ActionSoundOverride, const FInputActionExecutedDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    void PlayNavigationDeniedSound(EUINavigation NavigationType);
    
    UFUNCTION(BlueprintCallable)
    void PlayBackedOutSound();
    
    UFUNCTION(BlueprintCallable)
    bool GetImplementsGetFocusableWidget();
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetFocusableWidgetFromParent(TSubclassOf<UWidget> ParentType, const EUINavigation Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetFocusableWidget(const EUINavigation Direction);
    

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

