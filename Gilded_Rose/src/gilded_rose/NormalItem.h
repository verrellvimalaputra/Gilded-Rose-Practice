//
// Created by patri on 6/26/2023.
//

#ifndef GILDEDROSE_NORMALITEM_H
#define GILDEDROSE_NORMALITEM_H

#include "item.h"

class NormalItem : public Item{
public:
  NormalItem(string name, int sellIn, int quality);
  void updateQuality() override;

};

#endif // GILDEDROSE_NORMALITEM_H
