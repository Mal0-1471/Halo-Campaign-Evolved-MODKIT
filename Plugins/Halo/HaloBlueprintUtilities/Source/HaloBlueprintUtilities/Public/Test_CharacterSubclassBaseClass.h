#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Test_CharacterSubclassBaseClass.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable)
class ATest_CharacterSubclassBaseClass : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* BaseClassCapsule;
    
    ATest_CharacterSubclassBaseClass(const FObjectInitializer& ObjectInitializer);

};

