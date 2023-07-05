//
// Created by Ralf on 06.10.2022.
//

#include "Item.h"

Item::Item(string name, int sellIn, int quality) : name(name), sellIn(sellIn), quality(quality) {}

int Item::decreaseSellIn() {
  return --sellIn;
}

int Item::increaseQuality(int increment) {
  quality += increment;
  return quality;
}

Item::~Item()
{
  
}
