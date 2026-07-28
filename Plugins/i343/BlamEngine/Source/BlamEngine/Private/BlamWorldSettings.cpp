#include "BlamWorldSettings.h"

ABlamWorldSettings::ABlamWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 ABlamWorldSettings::DestroyComponents(const TArray<UActorComponent*>& Components, bool bDetachSceneComponentsFirst) {
    return 0;
}


