#pragma once
#include "CoreMinimal.h"
#include "EScenarioCutsceneTitleTransitionType.h"
#include "ScenarioCutsceneTitle.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FScenarioCutsceneTitle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DelayedName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DelayedName3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EScenarioCutsceneTitleTransitionType TransitionType;
    
    FScenarioCutsceneTitle();
};

