#include <iostream>
#include<cstdlib>
using namespace std;

class DayofYear
{
  public :
    void input();
    void output();
    void set(int newMonth, int newDay);

    void set(int newMonth);
    int getMonthNumber();
    int getDay();
  private:
    int month;
    int day;
};
int main(){

  DayofYear today, bachBirthday;
  cout<< "Enter today's date\n";
  today.input();
  cout<<"Today's date is ";
  today.output();
  cout<<"\n";

  bachBirthday.set(3,21);
  cout<<"J.S. Bach's birthday is ";
  bachBirthday.output();
  cout<<"\n";

  if(today.getMonthNumber() == bachBirthday.getMonthNumber() &&
      today.getDay() == bachBirthday.getDay()) cout<<"Happy Birthday J.S.!\n";
  else  cout<< "Happy Unbirthday J.S.!\n";
  return 0;
}

void DayofYear::set(int newMonth, int newDay){
  if((newMonth>=1)&& (newMonth<=12))  month = newMonth;
  else{
    cout<< "Illegal month value! Program aborted.\n";
    exit(1);
  }
  if((newDay>=1) && (newDay <=31))  day = newDay;
  else{
    cout <<"Illegal day value! Program aborted.\n";
    exit(1);
  }
}
void DayofYear::set(int newMonth){
  if((newMonth >=1)&& (newMonth <= 12)) month = newMonth;
  else{
    cout<<"Illegal month value! Program aborted.\n";
    exit(1);
  }
  day =1;
}

int DayofYear::getMonthNumber(){
  return month;
}

int DayofYear::getDay(){
  return day;
}

void DayofYear::input(){
  cout<<"Enter the month as a number: ";
  cin >>month;
  cout<<"Enter the day of the month: ";
  cin >>day;
  if((month <1) || (month >12) || (day<1)|| (day>31))
  {
    cout<<"Illegal date! Program aborted.\n";
    exit(1);
  }
}

void DayofYear::output(){
  switch(month){ // member variable - can be accessd without any object name!! 
  case 1:
    cout<< "January"; break;    
  case 2:
    cout<< "February"; break;
  case 3:
    cout<< "March"; break;
  case 4:
    cout<< "Aprill"; break;
  case 5:
    cout<< "May"; break;
  case 6:
    cout<< "June"; break;
  case 7:
    cout<< "July"; break;
  case 8:
    cout<< "Argust"; break;
  case 9:
    cout<< "September"; break;
  case 10:
    cout<< "October"; break;
  case 11:
    cout<< "November"; break;
  case 12:
    cout<< "December"; break;
  default:
    cout<<"Error in DayofYear::output, Contact software vendor";  
  }
  cout<<" "<<day; //member variable - can be accessd without any object name!! 
}
 