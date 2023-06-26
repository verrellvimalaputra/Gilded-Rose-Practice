//
// Created by patri on 6/26/2023.
//

#ifndef GILDEDROSE_ITEMCREATOR_H
#define GILDEDROSE_ITEMCREATOR_H

#include "iostream"
#include "item.h"

class ItemCreator {
public:
  static Item* createItem(string name, int sellIn, int quality);
private:
  static ItemType getItemType(string name);
};

#endif // GILDEDROSE_ITEMCREATOR_H
