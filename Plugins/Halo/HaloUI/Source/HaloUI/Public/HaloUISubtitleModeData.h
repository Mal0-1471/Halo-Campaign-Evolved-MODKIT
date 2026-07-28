#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HaloUISubtitleModeStyle.h"
#include "HaloUISubtitleModeData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HALOUI_API UHaloUISubtitleModeData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloUISubtitleModeStyle StyleData;
    
    UHaloUISubtitleModeData();

};

