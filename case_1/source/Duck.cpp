#include "Duck.hpp"

void Duck::performFly ()
{
    //delegate fly to FlyBehaviour interface implementation which will
    // get assigned during run-time
    poFly->fly ();
}

void Duck::swim ()
{
    cout << "swim is common for all ducks" << std::endl ;
}
