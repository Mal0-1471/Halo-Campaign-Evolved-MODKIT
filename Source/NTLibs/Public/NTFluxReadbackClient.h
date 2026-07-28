#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=BasicParticleData -FallbackName=BasicParticleData
#include "NTFluxReadbackClient.generated.h"

UINTERFACE(Blueprintable)
class NTLIBS_API UNTFluxReadbackClient : public UInterface {
    GENERATED_BODY()
};

class NTLIBS_API INTFluxReadbackClient : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetParticleData(const TArray<FBasicParticleData>& ParticleData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FVector> GetReadbackLocations();
    
};

