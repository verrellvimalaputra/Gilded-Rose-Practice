//
// Created by verrell on 5/4/2023.
//
#include "Item.h"
#include "ConcreteItemCreator.h"
#ifndef GILDEDROSE_CONJURED_H
#define GILDEDROSE_CONJURED_H

class Conjured : public Item{
public:
  Conjured(string name, int sellIn, int Quality);
  void updateQuality() override;

};

#endif // GILDEDROSE_CONJURED_H
