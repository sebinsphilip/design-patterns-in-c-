#include "Subject.hpp"

void Subject::setState ()
{
    stateChanged = true;
}

void Subject::resetState ()
{
    stateChanged = false;
}

bool Subject::getState ()
{
    return stateChanged;
}

