#pragma once
#include "CoreMinimal.h"
#include "EHaloUINarrationReadOutMode.h"
#include "EHaloUINarrationReadOutPriority.h"
#include "NarratableNodeData.generated.h"

USTRUCT(BlueprintType)
struct FNarratableNodeData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsNarratableNode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNarratesOnFocus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHaloUINarrationReadOutMode NarrationReadOutMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHaloUINarrationReadOutPriority NarrationReadOutPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NarrationTextPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NarrationTextPostfix;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SecondsToBlockReannouncement;
    
public:
    HALOUI_API FNarratableNodeData();
};

