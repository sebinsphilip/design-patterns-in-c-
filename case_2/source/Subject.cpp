#include "Subject.hpp"

Subject::Subject ()
{
  stateChanged = false;
}

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

