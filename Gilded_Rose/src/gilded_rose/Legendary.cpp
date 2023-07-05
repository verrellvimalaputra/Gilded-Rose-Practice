//
// Created by verrell on 5/4/2023.
//

#include "Legendary.h"

Legendary::Legendary(std::string name, int sellIn, int Quality) : Item(name, sellIn, Quality) {}

void Legendary::updateQuality(){
    //keine Veranderung
};

Legendary::~Legendary() {

}

