#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "CameraFollowSettings.h"
#include "BlamCinematicCamera.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API ABlamCinematicCamera : public ACineCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFollowSettings FollowSettings;
    
    ABlamCinematicCamera(const FObjectInitializer& ObjectInitializer);

};

