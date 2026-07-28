#pragma once
#include "CoreMinimal.h"
#include "BlamAnimNotify.h"
#include "BlamAnimNotifyEventType.h"
#include "AnimationBlamAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class BLAMSYNCHRONIZATION_API UAnimationBlamAnimNotify : public UBlamAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamAnimNotifyEventType EventType;
    
    UAnimationBlamAnimNotify();

};

