#pragma once
#include "CoreMinimal.h"
#include "EBlamPlayerRespawnFailure.h"
#include "BlamPlayerRespawn.generated.h"

USTRUCT(BlueprintType)
struct FBlamPlayerRespawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamPlayerRespawnFailure PlayerRespawnFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerRespawnTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ViewedPlayerAbsoluteIndex;
    
    BLAMGLUE_API FBlamPlayerRespawn();
};

