#include <iostream>
#include "FlyBehaviour.hpp"

using namespace std;

//implementation of interface
class FlyWithWings : public FlyBehaviour {
    void fly (){
        cout << "Fly with wings" << std::endl;
    }
};
