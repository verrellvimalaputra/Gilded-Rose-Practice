//
// Created by verrell on 5/4/2023.
//

#include "Conjured.h"

Conjured::Conjured(string name, int sellIn, int Quality) : Item(name, sellIn, Quality) {}

void Conjured::updateQuality() {
  decreaseSellIn();
  quality = std::max(MIN_QUALITY_VALUE, quality - (sellIn < MIN_SELLIN_LIMIT ? 4: 2));
}

Conjured::~Conjured() noexcept {

}