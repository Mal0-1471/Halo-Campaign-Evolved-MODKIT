#pragma once
#include "CoreMinimal.h"
#include "ETranscriptionType.h"
#include "HaloAudioTranscriptionLine.generated.h"

class UStringTable;

USTRUCT(BlueprintType)
struct HALOAUDIOUNREAL_API FHaloAudioTranscriptionLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETranscriptionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* StringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LineKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> MetaData;
    
    FHaloAudioTranscriptionLine();
};

