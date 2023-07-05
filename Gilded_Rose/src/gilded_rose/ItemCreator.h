//
// Created by patri on 6/26/2023.
//

#ifndef GILDEDROSE_ITEMCREATOR_H
#define GILDEDROSE_ITEMCREATOR_H

#include "iostream"
#include "Item.h"

class ItemCreator {
public:
  virtual Item* createItem(string name, int sellIn, int quality) = 0;

};

#endif // GILDEDROSE_ITEMCREATOR_H
