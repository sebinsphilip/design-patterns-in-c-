#ifndef __OBSERVER_HPP__
#define __OBSERVER_HPP__

#include <iostream>

using namespace std;

//interface
class Observer {
    public:

        //callback method to get notified
        virtual void update (Subject subject, void* data) = 0;
};

#endif
