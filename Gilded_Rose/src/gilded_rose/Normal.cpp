//
// Created by Patrick Chiu on 04.05.23.
//

#include "Normal.h"

Normal::Normal(string name, int sellIn, int quality) : Item(name, sellIn, quality){}

void Normal::updateQuality() {
  decreaseSellIn();
  quality = std::max(MIN_QUALITY_VALUE, quality - (sellIn < MIN_SELLIN_LIMIT ? 2 : 1));
}

