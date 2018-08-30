#include <iostream>

using namespace std;

class Duck;
int main ()
{
    Duck * oDuck = new MallardDuck ();
    cout << "CAlling Mallard duck" << oDuck->fly ();
    delete oDuck;
    oDuck = new WoddenDuck ();
    cout << "CAlling WoddenDuck duck" << oDuck->fly ();
    return 0;
}
