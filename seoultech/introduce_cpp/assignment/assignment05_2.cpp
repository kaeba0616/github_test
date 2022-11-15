#include<iostream>
using namespace std;

class DayofYear{
  public:
  void input();
  void output();

  private:
  int month;
  int day;

};


int main(){
  DayofYear birthday;
  birthday.input();
  birthday.day =25;
  cout<< birthday.month;
  cout<<birthday.output();
  if(birthday.month ==1)
  cout<< "January\n";
}



void DayofYear::input(){
  cin >> month >>day;
}

void DayofYear::output(){
  cout << month<<"months " <<day <<"days";
}
