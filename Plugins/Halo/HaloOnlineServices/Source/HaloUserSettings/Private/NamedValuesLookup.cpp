#include "NamedValuesLookup.h"

UNamedValuesLookup::UNamedValuesLookup() {
}

FString UNamedValuesLookup::GetStringValue(FName ValueCategory, FName ValidatedValueName) {
    return TEXT("");
}

FText UNamedValuesLookup::GetLabel(FName ValueCategory, FName ValidatedValueName) {
    return FText::GetEmpty();
}

int32 UNamedValuesLookup::GetIntValue(FName ValueCategory, FName ValidatedValueName) {
    return 0;
}

float UNamedValuesLookup::GetFloatValue(FName ValueCategory, FName ValidatedValueName) {
    return 0.0f;
}

FColor UNamedValuesLookup::GetColorValue(FName ValueCategory, FName ValidatedValueName) {
    return FColor{};
}


