#include "BlamMoverComponent.h"

UBlamMoverComponent::UBlamMoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FName UBlamMoverComponent::GetStance() const {
    return NAME_None;
}

EBlamMotorTask UBlamMoverComponent::GetMotorTask(const EBlamMotorResource MotorResource) const {
    return EBlamMotorTask::Default;
}

EBlamMotorProgram UBlamMoverComponent::GetMotorProgram() const {
    return EBlamMotorProgram::BipedGround;
}

EBlamCharacterPhysicsMode UBlamMoverComponent::GetCharacterPhysicsMode() const {
    return EBlamCharacterPhysicsMode::None;
}


