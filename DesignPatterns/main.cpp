#include <iostream>

#include "Navigation.h"
#include "NaviEconomic.h"
#include "NaviFast.h"
#include "NaviScenic.h"
#include "ThreeDStrategy.h"
#include "TwoDStrategy.h"


int main() {
    NaviFast fastStrategy;
    NaviScenic scenicStrategy;
    NaviEconomic economicStrategy;
    ThreeDStrategy threeD;
    TwoDStrategy twoD;


    Navigation navigation(&fastStrategy, &threeD);
    navigation.init(); // Outputs: Calculating route using fast strategy.

    navigation.setStrategy(&scenicStrategy);
    navigation.setDisplayMap(&threeD);
    navigation.setDisplayMap(&twoD);
    navigation.init(); // Outputs: Calculating route using scenic strategy.

    navigation.setStrategy(&economicStrategy);
    navigation.setDisplayMap(&threeD);
    navigation.setDisplayMap(&twoD);
    navigation.init(); // Outputs: Calculating route using economic strategy.

    return 0;
}
