#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "JsonSchemaGeneratorCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UJsonSchemaGeneratorCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UJsonSchemaGeneratorCommandlet();

};

