#ifndef NAVIGATION_H
#define NAVIGATION_H
#include "NaviStrategy.h"
#include "DisplayStrategy.h"

class Navigation {
public:
    explicit Navigation(NaviStrategy* strategy, DisplayStrategy* displayStrategy);
    void init();
    void setStrategy(NaviStrategy* newStrategy);
    void setDisplayMap(DisplayStrategy* newDisplay);

private:
    NaviStrategy* strategy;
    DisplayStrategy* displayStrategy;

    // The copy constructor and the copy assignment operator should be declared private
    // For simplicity of the exercise we ignore the rule of three
    //Navigation(const Navigation&);
    //Navigation& operator=(const Navigation&);
};

#endif //NAVIGATION_H
