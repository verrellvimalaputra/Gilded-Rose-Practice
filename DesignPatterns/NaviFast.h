#ifndef NAVIFAST_H
#define NAVIFAST_H


#include "NaviStrategy.h"
class NaviFast: public NaviStrategy {
public:
    void calculateRoute() override;
};

#endif //NAVIFAST_H
