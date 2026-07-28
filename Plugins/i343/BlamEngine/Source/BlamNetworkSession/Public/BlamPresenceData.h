#pragma once
#include "CoreMinimal.h"
#include "EBlamPresenceModeName.h"
#include "EBlamPresenceState.h"
#include "BlamPresenceData.generated.h"

USTRUCT(BlueprintType)
struct FBlamPresenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamPresenceState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamPresenceModeName ModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> AdditionalTokens;
    
    BLAMNETWORKSESSION_API FBlamPresenceData();
};

