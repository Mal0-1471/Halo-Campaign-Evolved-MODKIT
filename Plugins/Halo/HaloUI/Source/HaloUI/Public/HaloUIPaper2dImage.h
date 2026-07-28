#pragma once
#include "CoreMinimal.h"
#include "HaloUIImage.h"
#include "HaloUIPaper2dImage.generated.h"

class UPaperSprite;

UCLASS(Blueprintable)
class UHaloUIPaper2dImage : public UHaloUIImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* PaperSprite;
    
    UHaloUIPaper2dImage();

    UFUNCTION(BlueprintCallable)
    void SetPaperSprite(UPaperSprite* InSprite);
    
};

