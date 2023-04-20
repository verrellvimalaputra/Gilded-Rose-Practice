#include "GildedRose.h"

GildedRose::GildedRose(vector<Item *> &items)
    : items(items) {}

GildedRose::~GildedRose() {
  for (auto &item : items) {
    delete item;
  }
}
// Test Git

void updateStandardItem(Item &item){
  item.sellIn--;
  item.quality = std::max(0, item.quality - (item.sellIn < 0 ? 2 : 1));
}

void updateAgedBrie(Item &item){
  item.sellIn--;
  item.quality = std::min(50, item.quality + (item.sellIn < 0 ? 2 : 1));
}

void updateBackstagePasses(Item &item){
  item.sellIn--;
  if(item.sellIn < 0){
    item.quality = 0;
  }else if (item.sellIn < 5){
    item.quality = std::min (50, item.quality+3);
  }else if(item.sellIn < 10){
    item.quality = std::min(50, item.quality+2);
  }else{
    item.quality = std::min(50, item.quality+1);
  }
}

void updateSulfuras(Item &item){
  //keine Veranderung
}

void updateConjured(Item &item){
  item.sellIn--;
  item.quality = std::max(0, item.quality - (item.sellIn < 0 ? 4 : 2));
}

void GildedRose::updateQuality() {

  for (auto &item : items) {
    switch (item->typeOf()) {
    case LEGENDARY:
      updateSulfuras(*item);
      break;
    case CONJURED:
      updateConjured(*item);
      break;
    case MATURING:
      updateAgedBrie(*item);
      break;
    case EXPIRING:
      updateBackstagePasses(*item);
      break;
    case NORMAL:
      updateStandardItem(*item);
      break;
    }
  }
}


Item *GildedRose::createItem(string name, int sellIn, int quality) const { return new Item(name, sellIn, quality); }
