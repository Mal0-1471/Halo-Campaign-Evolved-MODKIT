#pragma once
#include "CoreMinimal.h"
#include "MySampleStruct.generated.h"

USTRUCT(BlueprintType)
struct FMySampleStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MyInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MyString;
    
    BLAMGAMETELEMETRY_API FMySampleStruct();
};

