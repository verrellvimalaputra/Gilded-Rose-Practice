#ifndef NAVIFAST_H
#define NAVIFAST_H


#include "NaviStrategy.h"

    class NaviFast: public NaviStrategy {
    private:
        void calculateRoute() override;
    };

#endif //NAVIFAST_H
