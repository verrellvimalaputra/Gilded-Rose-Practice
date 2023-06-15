#ifndef NAVIECONOMIC_H
#define NAVIECONOMIC_H


#include "NaviStrategy.h"

class NaviEconomic: public NaviStrategy {
public:
    void calculateRoute() override;
};


#endif //NAVIECONOMIC_H
