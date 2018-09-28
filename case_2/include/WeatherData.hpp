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
    std::vector<Observer> mObserverList;
    DataClass *poData;

    public:

    void measurementsChanged ();
    void setMeasurements (DataClass);

}

#endif
