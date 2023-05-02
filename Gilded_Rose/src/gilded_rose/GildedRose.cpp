#include "GildedRose.h"

GildedRose::GildedRose(vector<Item *> &items)
    : items(items) {}

GildedRose::~GildedRose() {
  for (auto &item : items) {
    delete item;
  }
}


void updateStandardItem(Item &item){
  item.sellIn--;
  item.quality = std::max(0, item.quality - (item.sellIn < 0 ? 2 : 1));
}

void updateAgedBrie(Item &item){        //Aged Brie actually increases in Quality the older it gets
  item.sellIn--;
  item.quality = std::min(50, item.quality + (item.sellIn < 0 ? 2 : 1));
}

//Backstage passes increases in Quality as its SellIn value approaches;
//Quality increases by 2 when there are 10 days or less and by 3 when there are 5 days or less but
//Quality drops to 0 after the concert
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

void updateConjured(Item &item){            //"Conjured" items degrade in Quality twice as fast as normal items
  item.sellIn--;
  item.quality = std::max(0, item.quality - (item.sellIn < 0 ? 4 : 2));
}

void GildedRose::updateQuality() {

  for (auto &item : items) {
    if (item->typeOf() == LEGENDARY) {
      updateSulfuras(*item);  //Sulfuras, Hand of Ragnaros is an LEGENDARY item
    }
    if(item->typeOf() == CONJURED) {
      updateConjured(*item); // Conjured Mana Cake is a CONJURED item
    }
    if(item->typeOf() == MATURING) {
      updateAgedBrie(*item); // AgedBrie is an MATURING item
    }
    if(item->typeOf() == EXPIRING) {
      updateBackstagePasses(*item); // Backstage passes to a TAFKAL80ETC concert is an EXPIRING Item
    }
    if(item->typeOf() == NORMAL) {
      updateStandardItem(*item); //The others are normal item
    }
  }
}


Item *GildedRose::createItem(string name, int sellIn, int quality) const { return new Item(name, sellIn, quality); }
