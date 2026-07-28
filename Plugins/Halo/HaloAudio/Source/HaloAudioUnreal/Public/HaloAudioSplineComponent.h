#pragma once
#include "CoreMinimal.h"
#include "Components/SplineComponent.h"
#include "HaloAudioSplineComponent.generated.h"

class UAkRtpc;
class UHaloAudioSplineMetadata;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HALOAUDIOUNREAL_API UHaloAudioSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloAudioSplineMetadata* HaloAudioSplineMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<UAkRtpc*> RtpcChannelArray;
    
    UHaloAudioSplineComponent(const FObjectInitializer& ObjectInitializer);

};

