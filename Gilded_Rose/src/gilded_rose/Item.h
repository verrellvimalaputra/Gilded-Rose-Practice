//
// Created by Ralf on 06.10.2022.
//

// Probably Item should have some methods, too.
// But be aware! Did you read the requirements?
// So do not touch this!

#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <vector>
using namespace std;

enum ItemType { LEGENDARY, CONJURED, MATURING, EXPIRING, NORMAL };

class Item {
public :
  Item(string name, int sellIn, int quality);
  virtual void updateQuality() = 0;
  int decreaseSellIn();
  int increaseQuality(int increment);
  const int MAX_QUALITY_VALUE = 50;
  const int MIN_QUALITY_VALUE = 0;
  const int MIN_SELLIN_LIMIT = 0;
  string name;
  int sellIn;
  int quality;
protected:

};

#endif // ITEM_H
