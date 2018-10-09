#include "CurrentConditionsDisplay.hpp"

CurrentConditionsDisplay::CurrentConditionsDisplay ()
{
  mpSubject = NULL;
}

CurrentConditionsDisplay::CurrentConditionsDisplay (Subject *sub)
{
  if (NULL != sub)
  {
    mpSubject = sub;
    mpSubject->registerObserver (this);
  }
  else
  {
    cout << "Subject is NULL!!" << std::endl;
  }
}

void CurrentConditionsDisplay::update (Subject *sub, void* data)
{
  DataClass *weatherData = (DataClass*)data;
  if (NULL == data)
  {
    cout << "NULL data is passed!!" << std::endl;
  }
  else
  {
    mData.setTemprature (weatherData->getTemprature());
    mData.setPressure (weatherData->getPressure());
    mData.setHumidity (weatherData->getHumidity());
    display ();
  }
}

void CurrentConditionsDisplay::display ()
{
  cout << "# Current-Conditions-Display #" << std::endl;
  cout << "Temprature : " << mData.getTemprature () << std::endl;
  cout << "Pressure : " << mData.getPressure () << std::endl;
  cout << "Humidity : " << mData.getHumidity () << std::endl;
}
