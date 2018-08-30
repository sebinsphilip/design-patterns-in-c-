#include <iostream>

using namespace std;

class FlyWithWings;

class MallardDuck : public Duck {
    public:
        MallardDuck () {
            poFly = new FlyWithWings ();
        }
};
