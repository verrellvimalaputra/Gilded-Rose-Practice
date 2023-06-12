#include "Navigation.h"
#include <iostream>

Navigation::Navigation(NaviStrategy* strategy) : strategy(strategy) {}

void Navigation::init() {
    std::cout << "Welcome to the Simulator of Navigation Devices!" << std::endl;
    strategy->calculateRoute();
}

void Navigation::setStrategy(NaviStrategy* newStrategy) {
    strategy = newStrategy;
}