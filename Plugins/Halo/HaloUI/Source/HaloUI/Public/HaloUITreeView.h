#pragma once
#include "CoreMinimal.h"
#include "CommonTreeView.h"
#include "Types/SlateEnums.h"
#include "EHaloUINarrationReadOutMode.h"
#include "EHaloUINarrationReadOutPriority.h"
#include "ENarrationItemType.h"
#include "HaloUINarratableNodeBlueprintableInterface.h"
#include "HaloUINarratableNodeInterface.h"
#include "HaloUIViewItemListener.h"
#include "NarratableNodeData.h"
#include "Templates/SubclassOf.h"
#include "ViewItemPressedDelegate.h"
#include "HaloUITreeView.generated.h"

class UHaloUIScrollBarStyle;
class UHaloUIViewItemData;
class UObject;

UCLASS(Blueprintable)
class HALOUI_API UHaloUITreeView : public UCommonTreeView, public IHaloUIViewItemListener, public IHaloUINarratableNodeInterface, public IHaloUINarratableNodeBlueprintableInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusChanged, bool, bNowInFocusPath);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHaloUIScrollBarStyle> HaloUIScrollBarStyleObject;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewItemPressed BP_OnViewItemPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusChanged OnFocusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNarratableNodeData NarratableNodeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENarrationItemType NarrationItemType;
    
public:

    UFUNCTION(BlueprintCallable)
    void SetScrollBarStyle(TSubclassOf<UHaloUIScrollBarStyle> NewStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetInitialFocus(bool bResetSelection);
    
    UFUNCTION(BlueprintCallable)
    void SelectItemForDirection(EUINavigation Direction);
    
    UFUNCTION(BlueprintCallable)
    UObject* SelectInitialChild(bool bResetSelection);
    
    UFUNCTION(BlueprintCallable)
    void SelectFirstSelectableItem();
    
    UFUNCTION(BlueprintCallable)
    void RefreshSelection();
    
    UFUNCTION(BlueprintCallable)
    void ExpandRootLevel();
    
    UFUNCTION(BlueprintCallable)
    void AddFilteredItem(int32 UserIndex, UHaloUIViewItemData* Item);
    

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

