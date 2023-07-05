//
// Created by patri on 6/26/2023.
//

#include "ConcreteItemCreator.h"
#include "Conjured.h"
#include "Expiring.h"
#include "Legendary.h"
#include "Maturing.h"
#include "Normal.h"

Item *ConcreteItemCreator::createItem(std::string name, int sellIn, int quality) {
  if(name == "Conjured Mana Cake")
    return new Conjured(name, sellIn, quality);
  else if(name == "Aged Brie")
    return new Maturing(name, sellIn, quality);
  else if(name == "Sulfuras, Hand of Ragnaros")
    return new Legendary(name, sellIn, quality);
  else if(name == "Backstage passes to a TAFKAL80ETC concert")
    return new Expiring(name, sellIn, quality);
  else
    return new Normal(name, sellIn, quality);

}