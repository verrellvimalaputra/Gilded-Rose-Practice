//
// Created by patri on 6/26/2023.
//

#include "NormalItem.h"
void NormalItem::updateQuality()
{
  decreaseSellIn();
  quality = std::max(MIN_QUALITY_VALUE, quality - (sellIn < MIN_SELLIN_LIMIT ? 2 : 1));
}