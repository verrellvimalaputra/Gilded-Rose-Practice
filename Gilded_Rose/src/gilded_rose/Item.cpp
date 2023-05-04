//
// Created by Ralf on 06.10.2022.
//

// Probably Item should have some methods, too.
// But be aware! Did you read the requirements?
// So do not touch this!

#include "Item.h"

Item::Item(string name, int sellIn, int quality) : name(name), sellIn(sellIn), quality(quality) {}

int Item::decreaseSellIn() {
  return sellIn--;
}

int Item::increaseQuality(int increment) {
  return quality + increment;
}