#include <iostream>
#include "FlyBehaviour.hpp"

using namespace std;

//implementation of interface
class FlyNoWay : public FlyBehaviour {
    void fly (){
        //cant fly
        cout << "I cant fly" << std::endl;
    }
};
