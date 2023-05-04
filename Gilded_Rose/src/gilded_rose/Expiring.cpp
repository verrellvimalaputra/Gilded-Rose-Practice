//
// Created by Patrick Chiu on 04.05.23.
//

#include "Expiring.h"

Expiring::Expiring(std::string name, int sellIn, int quality) : Item(name, sellIn, quality) {}

void Expiring::updateQuality() {
    decreaseSellIn();
    const int FIVE_DAYS_OR_LESS = 5;
    const int TEN_DAYS_OR_LESS = 10;
    if(item.sellIn < 0){
        item.quality = 0;
    }else if (item.sellIn < FIVE_DAYS_OR_LESS){
        item.quality = std::min (MAX_QUALITY_VALUE, increaseQuality(item, 3));
    }else if(item.sellIn < TEN_DAYS_OR_LESS){
        item.quality = std::min(MAX_QUALITY_VALUE, increaseQuality(item, 2));
    }else{
        item.quality = std::min(MAX_QUALITY_VALUE, increaseQuality(item, 1));
    }
}