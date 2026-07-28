#pragma once
#include "CoreMinimal.h"
#include "Groups/CommonButtonGroupBase.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Components/PanelWidget.h"
#include "EHaloUINarrationReadOutMode.h"
#include "EHaloUINarrationReadOutPriority.h"
#include "ENarrationItemType.h"
#include "HaloUINarratableNodeBlueprintableInterface.h"
#include "HaloUINarratableNodeInterface.h"
#include "NarratableNodeData.h"
#include "HaloUIButtonContainer.generated.h"

class UCommonButtonBase;
class UCommonButtonGroupBase;
class UHaloUIButtonBase;
class UHaloUIButtonContainerSlot;
class UWidget;

UCLASS(Blueprintable)
class HALOUI_API UHaloUIButtonContainer : public UPanelWidget, public IHaloUINarratableNodeInterface, public IHaloUINarratableNodeBlueprintableInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusChanged, bool, bNowInFocusPath);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectionRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ButtonPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultSelectedIndex;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleButtonBaseGroupDelegate OnSelectedButtonBaseChanged;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusChanged OnFocusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNarratableNodeData NarratableNodeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENarrationItemType NarrationItemType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroupBase* ButtonGroup;
    
public:
    UHaloUIButtonContainer();

    UFUNCTION(BlueprintCallable)
    void SetInitialFocus(bool bResetSelection);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SelectPreviousButton();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SelectNextButton();
    
    UFUNCTION(BlueprintCallable)
    UWidget* SelectInitialChild(bool bResetSelection);
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceButtonContainerChildAt(int32 Index, UHaloUIButtonBase* Content);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleButtonGroupSelectionChanged(UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHaloUIButtonBase* GetSelectedButton() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetLastChild(bool bEnabledOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWidget* GetFocusableWidget(const EUINavigation Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetFirstChild(bool bEnabledOnly) const;
    
    UFUNCTION(BlueprintCallable)
    UHaloUIButtonContainerSlot* AddChildToButtonContainer(UHaloUIButtonBase* Content);
    

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

