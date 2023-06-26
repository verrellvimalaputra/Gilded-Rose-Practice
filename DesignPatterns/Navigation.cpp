#include "Navigation.h"
#include <iostream>

Navigation::Navigation(NaviStrategy* strategy, DisplayStrategy* displayStrategy) : strategy(strategy), displayStrategy(displayStrategy) {}

void Navigation::init() {
    std::cout << "Welcome to the Simulator of Navigation Devices!" << std::endl;
    strategy->calculateRoute();
    displayStrategy->displayMap();
}

void Navigation::setStrategy(NaviStrategy* newStrategy) {
    strategy = newStrategy;
}

void Navigation::setDisplayMap(DisplayStrategy *newDisplay) {
    displayStrategy = newDisplay;
}