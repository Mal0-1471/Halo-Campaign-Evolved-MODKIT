#pragma once
#include "CoreMinimal.h"
#include "BlamSavedActorRecord.h"
#include "BlamUnrealSavedState.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FBlamUnrealSavedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamSavedActorRecord> SavedActors;
    
     FBlamUnrealSavedState();
};

