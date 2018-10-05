#ifndef __WEATHERDATA_HPP__
#define __WEATHERDATA_HPP__

#include <iostream>
#include "Subject.hpp"
#include "Observer.hpp"
#include "DataClass.hpp"

//concrete Subject implementation
class WeatherData: public Subject
{
  //state variables whose change will be notified
  DataClass *poData;
  std::vector<Observer> mObserverList;

 public:

  void measurementsChanged ();
  void setMeasurements (DataClass);

  //utility
  void listAllObservers ();

}

#endif
