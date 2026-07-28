#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BlamEffectData.h"
#include "BlamEffectComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamEffectComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpawnedByEffectSystem;
    
    UBlamEffectComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Stop(const FBlamEffectData& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Spawn(const FBlamEffectData& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Restart(const FBlamEffectData& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PingFromRicochet(const FBlamEffectData& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PingFromImpact(const FBlamEffectData& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PingFromChildProjectile(const FBlamEffectData& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Ping(const FBlamEffectData& EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Destroy(const FBlamEffectData& EventData);
    
};

