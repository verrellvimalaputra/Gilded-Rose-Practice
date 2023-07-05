//
// Created by patri on 6/26/2023.
//

#ifndef GILDEDROSE_CONCRETEITEMCREATOR_H
#define GILDEDROSE_CONCRETEITEMCREATOR_H
#include "ItemCreator.h"

class ConcreteItemCreator: public ItemCreator {
public:
  Item * createItem(std::string name, int sellIn, int quality) override;
private:
};

#endif // GILDEDROSE_CONCRETEITEMCREATOR_H
