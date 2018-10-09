#ifndef __CURRENTCONDITIONSDISPLAY_HPP__
#define __CURRENTCONDITIONSDISPLAY_HPP__

#include <iostream>
#include "Subject.hpp"
#include "Observer.hpp"
#include "DisplayElement.hpp"
#include "DataClass.hpp"

//Concrete observer class impl
class CurrentConditionsDisplay: public virtual Observer, public virtual DisplayElement
{
  DataClass mData;
  Subject *mpSubject;
 public:
  //constructor
  CurrentConditionsDisplay ();
  CurrentConditionsDisplay (Subject *sub);

  //virtual functions
  void update (Subject *subject, void* data);
  void display ();
};
#endif

