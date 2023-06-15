#ifndef NAVISCENIC_H
#define NAVISCENIC_H

#include "NaviStrategy.h"

class NaviScenic: public NaviStrategy {
public:
    void calculateRoute() override;
};



#endif //NAVISCENIC_H
