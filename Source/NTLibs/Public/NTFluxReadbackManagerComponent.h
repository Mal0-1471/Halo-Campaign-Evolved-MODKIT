#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceExport.h"
#include "NTFluxReadbackManagerComponent.generated.h"

class UNiagaraComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NTLIBS_API UNTFluxReadbackManagerComponent : public UActorComponent, public INiagaraParticleCallbackHandler {
    GENERATED_BODY()
public:
    UNTFluxReadbackManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Init(UNiagaraComponent* NewExportDataInstance, const TArray<UObject*>& NewClients);
    

    // Fix for true pure virtual functions not being implemented
};

