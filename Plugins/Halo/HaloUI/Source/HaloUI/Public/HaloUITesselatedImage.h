#pragma once
#include "CoreMinimal.h"
#include "HaloUIImage.h"
#include "HaloUITesselatedImage.generated.h"

UCLASS(Blueprintable)
class UHaloUITesselatedImage : public UHaloUIImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIUnitsBetweenTesselationDivisions;
    
    UHaloUITesselatedImage();

};

