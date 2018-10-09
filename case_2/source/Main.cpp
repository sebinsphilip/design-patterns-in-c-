#include "CurrentConditionsDisplay.hpp"
#include "WeatherData.hpp"

int main ()
{
  DataClass data(10,20,30);
  std::cout << "Created data element" << std::endl;
  WeatherData wData;
  std::cout << "Created WeatherData Subject" << std::endl;
  CurrentConditionsDisplay currentDisplay (&wData);
  std::cout << "Created currentDisplay Observer" << std::endl;
  wData.setMeasurements (data);
  std::cout << "Successfully setMeasurements" << std::endl;
  return 0;
}
