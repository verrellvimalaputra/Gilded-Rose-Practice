//
// Created by Patrick Chiu on 04.05.23.
//

#include "Maturing.h"

Maturing::Maturing(std::string name, int sellIn, int quality) : Item(name, sellIn, quality){

}
void Maturing::updateQuality()
{
    decreaseSellIn();
    quality = std::min(MAX_QUALITY_VALUE, quality + (sellIn < MIN_SELLIN_LIMIT ? 2 : 1));
}