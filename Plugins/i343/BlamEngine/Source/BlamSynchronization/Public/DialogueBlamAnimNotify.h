#pragma once
#include "CoreMinimal.h"
#include "BlamAnimNotify.h"
#include "EBlamDialogueEventType.h"
#include "DialogueBlamAnimNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class BLAMSYNCHRONIZATION_API UDialogueBlamAnimNotify : public UBlamAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamDialogueEventType DialogueEvent;
    
    UDialogueBlamAnimNotify();

};

