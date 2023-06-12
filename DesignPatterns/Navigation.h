#ifndef NAVIGATION_H
#define NAVIGATION_H
#include "NaviStrategy.h"

class Navigation {
public:
    explicit Navigation(NaviStrategy* strategy);
    void init();
    void setStrategy(NaviStrategy* newStrategy);

private:
    NaviStrategy* strategy;

    // The copy constructor and the copy assignment operator should be declared private
    // For simplicity of the exercise we ignore the rule of three
    //Navigation(const Navigation&);
    //Navigation& operator=(const Navigation&);
};

#endif //NAVIGATION_H
