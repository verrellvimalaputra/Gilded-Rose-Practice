#include "GildedRose.h"

GildedRose::GildedRose(vector<Item *> &items)
    : items(items) {}

GildedRose::~GildedRose() {
  for (auto &item : items) {
    delete item;
  }
}

const int MAX_QUALITY_VALUE = 50;
const int MIN_QUALITY_VALUE = 0;
const int MIN_SELLIN_LIMIT = 0;

int decreaseSellIn(Item &item){   //decrease the Sell in of an item
  return item.sellIn--;
}

int increaseQuality(Item &item, int increment){   //increase Quality of an Item
  return item.quality + increment;
}

void updateStandardItem(Item &item){
  decreaseSellIn(item);
  item.quality = std::max(MIN_QUALITY_VALUE, item.quality - (item.sellIn < MIN_SELLIN_LIMIT ? 2 : 1));
}

void updateAgedBrie(Item &item){        //Aged Brie actually increases in Quality the older it gets
  decreaseSellIn(item);
  item.quality = std::min(MAX_QUALITY_VALUE, item.quality + (item.sellIn < MIN_SELLIN_LIMIT ? 2 : 1));
}

//Backstage passes increases in Quality as its SellIn value approaches;
//Quality increases by 2 when there are 10 days or less and by 3 when there are 5 days or less but
//Quality drops to 0 after the concert
void updateBackstagePasses(Item &item){
  decreaseSellIn(item);
  const int FIVE_DAYS_OR_LESS = 5;
  const int TEN_DAYS_OR_LESS = 10;
  if(item.sellIn < 0){
    item.quality = 0;
  }else if (item.sellIn < FIVE_DAYS_OR_LESS){
    item.quality = std::min (MAX_QUALITY_VALUE, increaseQuality(item, 3));
  }else if(item.sellIn < TEN_DAYS_OR_LESS){
    item.quality = std::min(MAX_QUALITY_VALUE, increaseQuality(item, 2));
  }else{
    item.quality = std::min(MAX_QUALITY_VALUE, increaseQuality(item, 1));
  }
}

void updateSulfuras(Item &item){
  //keine Veranderung
}

void updateConjured(Item &item){            //"Conjured" items degrade in Quality twice as fast as normal items
  decreaseSellIn(item);
  item.quality = std::max(MIN_QUALITY_VALUE, item.quality - (item.sellIn < MIN_SELLIN_LIMIT ? 4 : 2));
}

//Result Preparation for Lab 2
void updateQuality(Item &item) {
    if (item.typeOf() == LEGENDARY) {
      updateSulfuras(item);  //Sulfuras, Hand of Ragnaros is an LEGENDARY item
    }
    if(item.typeOf() == CONJURED) {
      updateConjured(item); // Conjured Mana Cake is a CONJURED item
    }
    if(item.typeOf() == MATURING) {
      updateAgedBrie(item); // AgedBrie is an MATURING item
    }
    if(item.typeOf() == EXPIRING) {
      updateBackstagePasses(item); // Backstage passes to a TAFKAL80ETC concert is an EXPIRING Item
    }
    if(item.typeOf() == NORMAL) {
      updateStandardItem(item); //The others are normal item
    }
  }

  void GildedRose::updateItemsQuality() {
    for (auto itemPtr : items) {
      updateQuality(*itemPtr);
    }
  }


Item *GildedRose::createItem(string name, int sellIn, int quality) const { return new Item(name, sellIn, quality); }
