#ifndef __DATACLASS_HPP__
#define __DATACLASS_HPP__

class DataClass
{
  int mTemprature;
  int mHumidity;
  int mPressure;
 public:

  //constructor
  DataClass ();
  DataClass (int t, int h, int p)
  {
    mTemprature = t;
    mPressure = p;
    mHumidity = h;
  }

  //helper functions
  int getTemprature ()
  {
    return mTemprature;
  }
  int getHumidity ()
  {
    return mHumidity;
  }
  int getPressure ()
  {
    return mPressure;
  }
  void setTemprature (int t)
  {
    mTemprature = t;
  }
  void setPressure (int p)
  {
    mPressure = p;
  }
  void setHumidity (int h)
  {
    mHumidity = h;
  }
};

#endif
