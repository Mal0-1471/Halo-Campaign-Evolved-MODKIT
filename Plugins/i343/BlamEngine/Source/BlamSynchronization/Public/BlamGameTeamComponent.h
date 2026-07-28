#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlamGameTeamComponent.generated.h"

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamGameTeamComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UBlamGameTeamComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGameTeamString() const;
    
};

