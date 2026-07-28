#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EHaloUINarrationReadOutMode.h"
#include "EHaloUINarrationReadOutPriority.h"
#include "NarratableNodeData.h"
#include "HaloUINarratableNodeInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UHaloUINarratableNodeInterface : public UInterface {
    GENERATED_BODY()
};

class IHaloUINarratableNodeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual double GetSecondsToBlockReannouncement() const PURE_VIRTUAL(GetSecondsToBlockReannouncement, return 0.0;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetNarrationTextPrefix() const PURE_VIRTUAL(GetNarrationTextPrefix, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetNarrationTextPostfix() const PURE_VIRTUAL(GetNarrationTextPostfix, return FText::GetEmpty(););
    
    UFUNCTION(BlueprintCallable)
    virtual EHaloUINarrationReadOutPriority GetNarrationReadOutPriority() const PURE_VIRTUAL(GetNarrationReadOutPriority, return EHaloUINarrationReadOutPriority::Maximum;);
    
    UFUNCTION(BlueprintCallable)
    virtual EHaloUINarrationReadOutMode GetNarrationReadOutMode() const PURE_VIRTUAL(GetNarrationReadOutMode, return EHaloUINarrationReadOutMode::Authored;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetNarratesOnFocus() const PURE_VIRTUAL(GetNarratesOnFocus, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FNarratableNodeData GetNarratableNodeDataMutable() PURE_VIRTUAL(GetNarratableNodeDataMutable, return FNarratableNodeData{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FNarratableNodeData GetNarratableNodeData() const PURE_VIRTUAL(GetNarratableNodeData, return FNarratableNodeData{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetIsNodeReadyToBeRead() const PURE_VIRTUAL(GetIsNodeReadyToBeRead, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetIsNarratableNode() const PURE_VIRTUAL(GetIsNarratableNode, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetIsCurrentlyNarratable() const PURE_VIRTUAL(GetIsCurrentlyNarratable, return false;);
    
};

