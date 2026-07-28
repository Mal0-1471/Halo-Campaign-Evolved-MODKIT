#include "HaloUIViewItemDataFloat.h"

UHaloUIViewItemDataFloat::UHaloUIViewItemDataFloat() {
    this->MinValue = 0.00f;
    this->MaxValue = 1.00f;
    this->StepValue = 0.00f;
    this->bUseBackingRange = false;
    this->MinBackingValue = 0.00f;
    this->MaxBackingValue = 1.00f;
}

void UHaloUIViewItemDataFloat::SetValue(float NewValue) {
}

void UHaloUIViewItemDataFloat::SetUseBackingRange(bool bNewValue) {
}

void UHaloUIViewItemDataFloat::SetStep(float NewStep) {
}

void UHaloUIViewItemDataFloat::SetMinBackingValue(float NewValue) {
}

void UHaloUIViewItemDataFloat::SetMin(float NewMin) {
}

void UHaloUIViewItemDataFloat::SetMaxBackingValue(float NewValue) {
}

void UHaloUIViewItemDataFloat::SetMax(float NewMax) {
}

void UHaloUIViewItemDataFloat::HaloUICastToViewItemDataFloat(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataFloat*& AsHaloUIViewItemDataFloat) {
}

float UHaloUIViewItemDataFloat::GetValue() const {
    return 0.0f;
}

bool UHaloUIViewItemDataFloat::GetUseBackingRange() const {
    return false;
}

float UHaloUIViewItemDataFloat::GetStep() const {
    return 0.0f;
}

float UHaloUIViewItemDataFloat::GetMinBackingValue() const {
    return 0.0f;
}

float UHaloUIViewItemDataFloat::GetMin() const {
    return 0.0f;
}

float UHaloUIViewItemDataFloat::GetMaxBackingValue() const {
    return 0.0f;
}

float UHaloUIViewItemDataFloat::GetMax() const {
    return 0.0f;
}

void UHaloUIViewItemDataFloat::BindSetter(UHaloUIViewItemDataFloat::FViewSetterFloat NewSetter) {
}

void UHaloUIViewItemDataFloat::BindGetter(UHaloUIViewItemDataFloat::FViewGetterFloat NewGetter) {
}


