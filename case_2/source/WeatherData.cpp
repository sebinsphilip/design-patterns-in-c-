#include "WeatherData.hpp"

WeatherData::WeatherData ()
{
  //mObserverList = new std::vector<Observer*>();
  poData = new DataClass(0,0,0);
}

void WeatherData::registerObserver (Observer *ob)
{
  if (NULL != mObserverList)
  {
    mObserverList.push_back (ob);
    cout << "Successfully registered Observer!" << std::endl;
    listAllObservers();
  }
}

void WeatherData::removeObserver (Observer *ob)
{
  if (NULL != mObserverList)
  {
    for (auto it = mObserverList.begin(), it != mObserverList.end(); i++)
    {
      if (*it == ob)
      {
        mObserverList.erase (it);
        cout << "removing observer success" << std::endl;
      }
    }
    listAllObservers();
  }
}

void WeatherData::notifyAllObservers ()
{
  if (getState())
  {
    for (auto i = mObserverList.begin(); i != mObserverList.end(); i++)
    {
      *i->update (this, poData);
    }
    resetState();
  }
}

void WeatherData::measurementsChanged ()
{
  setState ();
  notifyAllObservers ();
}

void WeatherData::listAllObservers ()
{
  cout << " ###### Observer list ######" << std::endl;
  for (auto i = mObserverList.begin() ; i != mObserverList.end(); i++)
  {
    cout << "> " << *i;
  }
  cout << std::endl;
}

void WeatherData::setMeasurements (DataClass data)
{
  if (NULL != poData)
  {
    poData->setTemprature (data.getTemprature ());
    poData->setHumidity (data.getHumidity ());
    poData->setPressure (data.getPressure ());
    cout << "Measurements set success" << std::endl;
    measurementsChanged ();
  }
}

