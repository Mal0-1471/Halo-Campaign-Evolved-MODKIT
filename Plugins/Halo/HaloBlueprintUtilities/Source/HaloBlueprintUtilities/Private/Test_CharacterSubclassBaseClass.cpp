#include "Test_CharacterSubclassBaseClass.h"
#include "Components/CapsuleComponent.h"

ATest_CharacterSubclassBaseClass::ATest_CharacterSubclassBaseClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseClassCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("BaseClassCapsule"));
}


