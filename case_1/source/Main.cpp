#include <iostream>
#include "MallardDuck.hpp"
#include "WoddenDuck.hpp"
#include "Duck.hpp"

using namespace std;

int main ()
{
    Duck * oDuck = new MallardDuck ();
    cout << "CAlling Mallard duck";
    oDuck->performFly ();
    delete oDuck;
    oDuck = new WoddenDuck ();
    cout << "CAlling WoddenDuck duck";
    oDuck->performFly ();
    return 0;
}
