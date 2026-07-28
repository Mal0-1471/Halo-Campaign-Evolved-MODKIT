#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "HaloUIButtonBase.h"
#include "HaloUIViewButtonBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HALOUI_API UHaloUIViewButtonBase : public UHaloUIButtonBase, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UHaloUIViewButtonBase();


    // Fix for true pure virtual functions not being implemented
};

