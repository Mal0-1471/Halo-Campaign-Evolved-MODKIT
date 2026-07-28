#pragma once
#include "CoreMinimal.h"
#include "NTFluxBaseActor.h"
#include "NTFluxNiagaraActor.generated.h"

UCLASS(Blueprintable)
class NTLIBS_API ANTFluxNiagaraActor : public ANTFluxBaseActor {
    GENERATED_BODY()
public:
    ANTFluxNiagaraActor(const FObjectInitializer& ObjectInitializer);

};

