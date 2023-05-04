//
// Created by Patrick Chiu on 04.05.23.
//

#ifndef OOAD_23SS_DO3Y_2_CHIU_VIMALAPUTRA_MATURINGITEM_H
#define OOAD_23SS_DO3Y_2_CHIU_VIMALAPUTRA_MATURINGITEM_H
#include "item.h"


class Maturing : public Item {
public:
    Maturing(string name, int sellIn, int quality);
    void updateQuality() override;
    ~Maturing();
};


#endif //OOAD_23SS_DO3Y_2_CHIU_VIMALAPUTRA_MATURINGITEM_H
