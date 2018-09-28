#include "WeatherData.hpp"

WeatherData::WeatherData ()
{
    mObserverList = new std::vector<Observer>();
    poData = new Data(0,0,0);
}

void WeatherData::registerObserver (Observer ob)
{
    if (NULL != mObserverList)
    {
        mObserverList.push_back (ob);
        cout << "Successfully registered Observer!" << std::endl;
    }

}

void WeatherData::removeObserver (Observer ob)
{
    if (NULL != mObserverList)
    {
        for (auto it = mObserverList.begin(), auto i = 0; i < mObserverList.size(); i++)
        {
            if (it.at(i) == ob)
            {
                cout << "removing observer success" << std::endl;
            }
        }
    }

}

void WeatherData::notifyAllObservers ()
{
    for (auto i = mObserverList.begin(); i < mObserverList.size(); i++)
    {
        i.update (this, );
    }

}

void WeatherData::measurementsChanged ()
{
    notifyAllObservers ();
}

