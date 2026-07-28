#pragma once
#include "CoreMinimal.h"
#include "CommonActionWidget.h"
#include "GameplayTagContainer.h"
#include "EHaloUIActionWidgetScaleRefType.h"
#include "EHaloUINarrationReadOutMode.h"
#include "EHaloUINarrationReadOutPriority.h"
#include "HaloUINarratableNodeBlueprintableInterface.h"
#include "HaloUINarratableNodeInterface.h"
#include "NarratableNodeData.h"
#include "HaloUIActionWidget.generated.h"

UCLASS(Blueprintable)
class HALOUI_API UHaloUIActionWidget : public UCommonActionWidget, public IHaloUINarratableNodeInterface, public IHaloUINarratableNodeBlueprintableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNarratableNodeData NarratableNodeData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHaloUIActionWidgetScaleRefType ActionWidgetScaleRefType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TextScalingCategory;
    
public:
    UHaloUIActionWidget();


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

