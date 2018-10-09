#ifndef __OBSERVER_HPP__
#define __OBSERVER_HPP__

#include <iostream>
#include "Subject.hpp"

using namespace std;

class Subject;

//interface
class Observer {
 public:

   //callback method to get notified
   virtual void update (Subject *subject, void* data) = 0;
};

#endif
