//
// Created by Patrick Chiu on 04.05.23.
//

#include "Expiring.h"

Expiring::Expiring(std::string name, int sellIn, int quality) : Item(name, sellIn, quality) {}

void Expiring::updateQuality() {
    decreaseSellIn();
    const int FIVE_DAYS_OR_LESS = 5;
    const int TEN_DAYS_OR_LESS = 10;

    if(sellIn < 0){
        quality = 0;
    }else if (sellIn < FIVE_DAYS_OR_LESS){
        quality = std::min (MAX_QUALITY_VALUE, increaseQuality(3));
    }else if(sellIn < TEN_DAYS_OR_LESS){
        quality = std::min(MAX_QUALITY_VALUE, increaseQuality(2));
    }else{
        quality = std::min(MAX_QUALITY_VALUE, increaseQuality(1));
    }
}