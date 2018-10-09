#ifndef __WEATHERDATA_HPP__
#define __WEATHERDATA_HPP__

#include <iostream>
#include <vector>
#include "Subject.hpp"
#include "Observer.hpp"
#include "DataClass.hpp"

//concrete Subject implementation
class WeatherData: public virtual Subject
{
  //state variables whose change will be notified
  DataClass *poData;
  std::vector<Observer*> mObserverList;

 public:

  WeatherData ();
  void measurementsChanged ();
  void setMeasurements (DataClass);

  //virtual functions
   void registerObserver (Observer *o);
   void removeObserver (Observer *o);
   void notifyAllObservers ();

  //utility
  void listAllObservers ();

};

#endif
