#include<iostream>
using namespace std;
#include "dtime.h"


int main(){
  DigitalTime clock, oldClock;

  cout << "You may write midnight as either 0:00 or 24:00,\n"
      << "but I will always write it as 0:00.\n"
      << "Enter the time in 24-hour notation: ";
  cin >>clock;

  oldClock = clock;
  clock.advance(15);
  if(clock == oldClock) cout << "Something is wrong.";
  cout << "you entered " << oldClock << "\n";
  cout << "15 minutes later the time will be "
      << clock <<"\n";
  
  clock.advance(2,15);
  cout << "2 hours and 15 minutes after that\n"
      << "the time will be " <<clock <<"\n";

  return 0;
}