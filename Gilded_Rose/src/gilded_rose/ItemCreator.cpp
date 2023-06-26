//
// Created by patri on 6/26/2023.
//

#include "ItemCreator.h"
#include "Conjured.h"
#include "Expiring.h"
#include "Legendary.h"
#include "Maturing.h"
#include "Normal.h"

Item *ItemCreator::createItem(std::string name, int sellIn, int quality) {
  ItemType itemType = getItemType(name);
  switch (itemType) {
  case NORMAL:
    return new Normal(name, sellIn, quality);
  case MATURING:
    return new Maturing(name, sellIn, quality);
  case LEGENDARY:
    return new Legendary(name, sellIn, quality);
  case EXPIRING:
    return new Expiring(name, sellIn, quality);
  case CONJURED:
    return new Conjured(name, sellIn, quality);
  default:
    std::cout <<"Invalid item type";
  }
}

ItemType getItemType(string name)
{
  return NORMAL;
}
