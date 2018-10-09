#ifndef __SUBJECT_HPP__
#define __SUBJECT_HPP__

#include <iostream>
#include "Observer.hpp"

using namespace std;

//interface
class Subject {

  //only fire event, if state is changed
  bool stateChanged;
  /*TODO: can extend the Subject interface to maintain the Observer list as well
    instead of delegating the responsibiliy to concrete class implementation */

 public:
  // main 3 methods for Publisher
  Subject();
  virtual void registerObserver (Observer *o) = 0;
  virtual void removeObserver (Observer *o) = 0;
  virtual void notifyAllObservers () = 0;

  //optional state management
  void setState ();
  void resetState ();
  bool getState ();
};

#endif
