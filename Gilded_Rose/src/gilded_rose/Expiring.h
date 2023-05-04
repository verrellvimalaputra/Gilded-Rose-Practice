//
// Created by Patrick Chiu on 04.05.23.
//

#ifndef OOAD_23SS_DO3Y_2_CHIU_VIMALAPUTRA_EXPIRING_H
#define OOAD_23SS_DO3Y_2_CHIU_VIMALAPUTRA_EXPIRING_H
#include "item.h"

class Expiring : public Item{
public:
    Expiring(string name, int sellIn, int quality);
    void updateQuality() override;
    ~Expiring();
};


#endif //OOAD_23SS_DO3Y_2_CHIU_VIMALAPUTRA_EXPIRING_H
