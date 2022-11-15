#include<iostream>
using namespace std;

class DayofYear  // name of new class type
{
  public :
    void output();  // <- member function - prototype!! ( Function's implementation is elsewhere )
    int month;
    int day;
}

//Declaring objects

DayofYear today, birthday;

//Class Member access
today.month;
today.day
today.output();

int main(){

}

//Class Member Functions

void DayofYear::output(){

}


// Class is full-fledged type
// Can have variebles of a class type
  // We simple call them "objects"
// Can have pararmeters of a class type
  // Pass-by-value
  // Pass-by-reference
// Can use class type like any other type!