#include<iostream>
using namespace std;

class DayofYear 
{
  public :
    void output();
    int month;
    int day;
}

int main(){
  DayofYear today, birthday;
  cout<<"Enter today's date\n";
  cout<<"Enter month as a number : ";
  cin>>today.month;
  cout<<"Enter the day of the month : ";
  cin>>today.day;
  cout<<"Enter birthday's date\n";
  cout<<"Enter month as a number";
  cin>>birthday.month;
  cout<<"Enter the day of the month";
  cin>>birthday.day;

  cout<< "Today's date is ";
  today.output();
  cout<< "birthday's date is ";
  birthday.output();
  cout <<"\n";
  if(today.month == brithday.month && today.day == birthday.day)cout<< "Happy birthday!!";
  else cout<<"Happy unbirthday";
  return 0;
  }
void DayofYear::output(){
  switch(month){ // member variable - can be accessd without any object name!! 
  case 1:
    cout<< "January"; break;    
  case 2:
    cout<< "February"; break;
  case 3:
    cout<< "Marth"; break;
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
  cout<<day; //member variable - can be accessd without any object name!! 
}