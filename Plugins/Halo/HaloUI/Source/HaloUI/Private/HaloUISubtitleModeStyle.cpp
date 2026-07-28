#include "HaloUISubtitleModeStyle.h"

FHaloUISubtitleModeStyle::FHaloUISubtitleModeStyle() {
    this->bUseGlobalFontSizeSetting = false;
    this->bReplaceCurrentSubtitleImmediatly = false;
    this->LetterSpacingPercent = 0.00f;
    this->LineSpacing = 0.00f;
    this->SubtitleCaps = EHaloUISubtitleCaps::None;
    this->BackingOpacityPercent = 0.00f;
    this->bDialogueColorMatchesSpeaker = false;
    this->MaxNumberOfNonWhitespaceCharactersOnLine = 0;
    this->NumberOfVisibleLines = 0;
    this->bUseFontSizeMultipleForMargin = false;
    this->HorizontalBackingMargin = 0.00f;
    this->TopBackingMargin = 0.00f;
    this->BottomBackingMargin = 0.00f;
    this->TextJustification = ETextJustify::Left;
    this->OutlineSizeAsPercentOfFontSize = 0.00f;
    this->TimeToSkipShowingSameSpeaker = 0.00f;
    this->MinTimeAllowedForSingleLine = 0.00f;
}

