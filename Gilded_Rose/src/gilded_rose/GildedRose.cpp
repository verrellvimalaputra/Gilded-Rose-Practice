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
      updateQuality(*itemPtr);
    }
  }


Item *GildedRose::createItem(string name, int sellIn, int quality) const { return new Item(name, sellIn, quality); }
