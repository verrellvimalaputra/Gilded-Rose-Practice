//
// Created by Ralf on 06.10.2022.
//
#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <vector>
using namespace std;

class Item {
public :
  Item(string name, int sellIn, int quality);
  virtual void updateQuality() = 0;     //virtual Method
  int decreaseSellIn();
  int increaseQuality(int increment);
  string name;
  int sellIn;
  int quality;

  //const variables
  const int MAX_QUALITY_VALUE = 50;
  const int MIN_QUALITY_VALUE = 0;
  const int MIN_SELLIN_LIMIT = 0;
protected:

};

#endif // ITEM_H
