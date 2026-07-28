#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlamSaveGameBlueprintLibrary.generated.h"

class BLAMENGINE_API AActor;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamSaveGameBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlamSaveGameBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool RemoveSaveGameTrackedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool AddSaveGameTrackedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool AddActorToBeDestroyedOnBlamReset(AActor* Actor);
    
};

