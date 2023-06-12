#include <iostream>

#include "Navigation.h"
#include "NaviEconomic.h"
#include "NaviFast.h"
#include "NaviScenic.h"


int main() {
    NaviFast fastStrategy;
    NaviScenic scenicStrategy;
    NaviEconomic economicStrategy;

    Navigation navigation(&fastStrategy);
    navigation.init(); // Outputs: Calculating route using fast strategy.

    navigation.setStrategy(&scenicStrategy);
    navigation.init(); // Outputs: Calculating route using scenic strategy.

    navigation.setStrategy(&economicStrategy);
    navigation.init(); // Outputs: Calculating route using economic strategy.

    return 0;
}
