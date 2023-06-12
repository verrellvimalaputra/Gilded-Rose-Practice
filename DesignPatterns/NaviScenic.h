#ifndef NAVISCENIC_H
#define NAVISCENIC_H

#include "NaviStrategy.h"

class NaviScenic: public NaviStrategy {
private:
    void calculateRoute() override;
};



#endif //NAVISCENIC_H
