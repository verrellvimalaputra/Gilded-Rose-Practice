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
  if (name == "Backstage passes to a TAFKAL80ETC concert") {
    return new Expiring(name, sellIn, quality);
  }
  if (name == "Sulfuras, Hand of Ragnaros"){
    return new Legendary(name,sellIn,quality);
  }
  if (name == "Conjured Mana cake"){
    return new Conjured(name,sellIn,quality);
  }
  if (name == "AgedBrie"){
    return new Maturing(name,sellIn,quality);
  }
  else{
    return new Normal(name, sellIn, quality);
  }
}
