#include <iostream>
#include "FlyBehaviour.hpp"

using namespace std;

//class FlyBehaviour;

class Duck {

    FlyBehaviour * poFly;

    public:
    Duck (){
    }
    void performFly (){
        //delegate fly to FlyBehaviour interface implementation which will
        // get assigned during run-time
        poFly->fly ();
    }
    void swim (){
        cout << "swim is common for all ducks" << std::endl ;
    }

};
