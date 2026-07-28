#pragma once
#include "CoreMinimal.h"
#include "BlamSavedActorComponentRecord.h"
#include "BlamSavedActorRecord.generated.h"

class BLAMENGINE_API AActor;

USTRUCT(BlueprintType)
struct BLAMENGINE_API FBlamSavedActorRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> Class;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 BlamObjectGameStateIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamSavedActorComponentRecord> Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
     FBlamSavedActorRecord();
};

