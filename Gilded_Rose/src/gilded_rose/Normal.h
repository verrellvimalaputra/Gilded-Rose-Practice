//
// Created by Patrick Chiu on 04.05.23.
//

#ifndef OOAD_23SS_DO3Y_2_CHIU_VIMALAPUTRA_NORMAL_H
#define OOAD_23SS_DO3Y_2_CHIU_VIMALAPUTRA_NORMAL_H
#include "Item.h"
#include "ConcreteItemCreator.h"

class Normal : public Item{
public:
    Normal(string name, int sellIn, int quality);
    void updateQuality() override;
    ~Normal();
};


#endif //OOAD_23SS_DO3Y_2_CHIU_VIMALAPUTRA_NORMAL_H
