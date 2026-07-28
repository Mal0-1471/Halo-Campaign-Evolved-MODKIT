#pragma once
#include "CoreMinimal.h"
#include "CommonNumericTextBlock.h"
#include "EHaloUINarrationReadOutMode.h"
#include "EHaloUINarrationReadOutPriority.h"
#include "HaloUIButtonTextProperties.h"
#include "HaloUIButtonTextPropertiesOptional.h"
#include "HaloUINarratableNodeBlueprintableInterface.h"
#include "HaloUINarratableNodeInterface.h"
#include "HaloUITextStyleController.h"
#include "HaloUITextStyleControllerProperties.h"
#include "NarratableNodeData.h"
#include "Templates/SubclassOf.h"
#include "HaloUINumericTextBlock.generated.h"

class UHaloUINumericTextBlockStyle;

UCLASS(Blueprintable)
class HALOUI_API UHaloUINumericTextBlock : public UCommonNumericTextBlock, public IHaloUITextStyleController, public IHaloUINarratableNodeInterface, public IHaloUINarratableNodeBlueprintableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUITextStyleControllerProperties TextStyleControllerProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHaloUINumericTextBlockStyle> HaloUINumericTextBlockStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNarratableNodeData NarratableNodeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNarrateChangesAsFocusEvent;
    
public:

    UFUNCTION(BlueprintCallable)
    void SetNumberFormattingOptions(const FCommonNumberFormattingOptions& InNumberFormattingOptions);
    
    UFUNCTION(BlueprintCallable)
    void SetHaloUINumericTextBlockStyle(const TSubclassOf<UHaloUINumericTextBlockStyle>& NumericTextBlockStyle);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void ApplyTextProperties(const FHaloUIButtonTextProperties& Properties) override PURE_VIRTUAL(ApplyTextProperties,);
    
    UFUNCTION(BlueprintCallable)
    void ApplyOptionalTextProperties(const FHaloUIButtonTextPropertiesOptional& Properties) override PURE_VIRTUAL(ApplyOptionalTextProperties,);
    
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

