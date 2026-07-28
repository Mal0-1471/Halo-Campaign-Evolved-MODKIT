#pragma once
#include "CoreMinimal.h"
#include "EBlamCharacterPhysicsMode.h"
#include "EBlamMotorProgram.h"
#include "EBlamMotorResource.h"
#include "EBlamMotorTask.h"
#include "BlamObjectTypeComponent.h"
#include "BlamMoverComponent.generated.h"

UCLASS(Blueprintable, Const, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMSYNCHRONIZATION_API UBlamMoverComponent : public UBlamObjectTypeComponent {
    GENERATED_BODY()
public:
    UBlamMoverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamMotorTask GetMotorTask(const EBlamMotorResource MotorResource) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamMotorProgram GetMotorProgram() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBlamCharacterPhysicsMode GetCharacterPhysicsMode() const;
    
};

