#include <iostream>

using namespace std;

class FlyNoWay;

class WoddenDuck : public Duck {
    public:
        WoddenDuck () {
            poFly = new FlyNoWay ();
        }
};
