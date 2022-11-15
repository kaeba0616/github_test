#ifndef DTIME_H
#define DTIME_H

#include<iostream>
using std::istream;
using std::ostream;

namespace DTimeSavitch{
  class DigitalTime{
    public:  
      DigitalTime(int theHour, int theMinute);
      DigitalTime();
      //intializes the time value to 0:00 (which is midngith).

      getHour()const;
      getMinute()const;

      void advance(int minutesAdded);
      //changes the time to minutesAdded minutes later.
      void advance(int hoursAdded, int minutesAdded);
      //change the time to hoursAdded hours plus minutesAdded minutes later.

      friend bool operator ==(const DigitalTime& time1, const DigitalTime& time2);

      friend istream& operator >>(istream& ins, DigitalTime& theObject);

      friend ostream& operator <<(ostream& outs, const DigitalTime& theObject);

    private:
      int hour;
      int minute;
  };
}// DTimeSavitch

#endif //DTIME_H