#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HaloAudioAcousticPortal.h"
#include "HaloAudioPortalProperties.h"
#include "HaloAudioExtrudedPortal.generated.h"

class UHaloAudioExtrudedPortalVisComponent;
class UHaloAudioPortalDoorComponent;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API AHaloAudioExtrudedPortal : public AActor, public IHaloAudioAcousticPortal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHaloAudioExtrudedPortalVisComponent* VisualComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHaloAudioPortalProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HalfExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHaloAudioPortalDoorComponent* DoorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> Spokes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShapeInUse;
    
public:
    AHaloAudioExtrudedPortal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BakeThisPortalAcoustics();
    
    UFUNCTION(BlueprintCallable)
    void BakeAllAcoustics();
    

    // Fix for true pure virtual functions not being implemented
};

