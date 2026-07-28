#include "HaloUIViewItemDataSlider.h"
#include "Templates/SubclassOf.h"

UHaloUIViewItemDataSlider::UHaloUIViewItemDataSlider() {
    this->SliderStyle = NULL;
    this->NumericTextBlockStyle = NULL;
}

void UHaloUIViewItemDataSlider::SetSliderStyle(TSubclassOf<UHaloUISliderStyle> NewSliderStyle) {
}

void UHaloUIViewItemDataSlider::SetNumericTextBlockStyle(TSubclassOf<UHaloUINumericTextBlockStyle> NewNumericTextBlockStyle) {
}

void UHaloUIViewItemDataSlider::SetButtonTextPropertiesOptional(const FHaloUIButtonTextPropertiesOptional& NewButtonTextPropertiesOptional) {
}

void UHaloUIViewItemDataSlider::HaloUICastToViewItemDataSlider(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataSlider*& AsHaloUIViewItemDataSlider) {
}

TSubclassOf<UHaloUISliderStyle> UHaloUIViewItemDataSlider::GetSliderStyle() const {
    return NULL;
}

TSubclassOf<UHaloUINumericTextBlockStyle> UHaloUIViewItemDataSlider::GetNumericTextBlockStyle() const {
    return NULL;
}

FHaloUIButtonTextPropertiesOptional UHaloUIViewItemDataSlider::GetButtonTextPropertiesOptional() const {
    return FHaloUIButtonTextPropertiesOptional{};
}


