#include "GildedRose.h"

GildedRose::GildedRose(vector<Item *> &items)
    : items(items) {}

GildedRose::~GildedRose() {
  for (auto &item : items) {
    delete item;
  }
}

void GildedRose::updateItemsQuality() {
    for (auto itemPtr : items) {
      itemPtr->updateQuality();
    }
  }


Item *GildedRose::createItem(string name, int sellIn, int quality) const {
  return itemCreator->createItem(name, sellIn, quality);
}
