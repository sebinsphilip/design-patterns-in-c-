#ifndef __DUCK_HPP__
#define __DUCK_HPP__

#include <iostream>
#include "FlyBehaviour.hpp"

using namespace std;

class Duck {


    public:
    FlyBehaviour * poFly;
    void performFly ();
    void setFlyBehaviour (FlyBehaviour *fb);
    void swim ();
};

#endif
