#ifndef __FLYWITHWINGS_HPP__
#define __FLYWITHWINGS_HPP__

#include <iostream>
#include "FlyBehaviour.hpp"

using namespace std;

//implementation of interface
class FlyWithWings : public FlyBehaviour {
    void fly ();
};

#endif
