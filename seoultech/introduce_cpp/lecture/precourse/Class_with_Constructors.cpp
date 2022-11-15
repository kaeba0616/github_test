#include<iostream>
#include<cstdlib>
using namespace std;

Class DayofYear{
  public :
    DayofYear(int monthValue, int dayValue);
    //initialized the month and day to argument
    DayofYear(int monthValue);
    //intialized the date to the first of the given month
    DayofYear();
    //intialized the date to January 1
  private:

}


/*DayofYear(int monthValue, int dayValue)
                                    : month (monthValue), day(dayValue)
{
  testDate();
}
  */  

/*DayofYear(int monthValue)
                                    : month (monthValue), day(1)
{
  testDate();
}
  */  
/*DayofYear()
            : month (1), day(1)
{
  testDate();
}
  */  