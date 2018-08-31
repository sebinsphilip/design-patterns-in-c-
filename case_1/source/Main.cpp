#include <iostream>
#include "MallardDuck.hpp"
#include "WoddenDuck.hpp"
#include "FlyWithWings.hpp"
#include "Duck.hpp"

using namespace std;

int main ()
{
    Duck * oDuck = new MallardDuck ();
    cout << "CAlling Mallard duck fly";
    oDuck->performFly ();
    delete oDuck;
    oDuck = new WoddenDuck ();
    cout << "CAlling WoddenDuck duck fly";
    oDuck->performFly ();
    // dynamic behaviour update
    oDuck->setFlyBehaviour (new FlyWithWings ());
    cout << "CAlling WoddenDuck duck fly";
    oDuck->performFly ();
    delete oDuck;
    return 0;
}
