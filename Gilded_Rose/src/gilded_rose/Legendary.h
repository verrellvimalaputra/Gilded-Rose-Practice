//
// Created by verrell on 5/4/2023.
//
#include "Item.h"
#ifndef GILDEDROSE_LEGENDARY_H
#define GILDEDROSE_LEGENDARY_H

class Legendary : public Item {
public:
  Legendary(string name, int sellIn, int Quality);
  void updateQuality() override;

};

#endif // GILDEDROSE_LEGENDARY_H
