#include<iostream>
#include "hourlyemployee.h"
using std::cout;
using std::endl;
using SavitchEmployees::HourlyEmployee;

int main(){
  HourlyEmployee joe;
  joe.setName("Mighty Joe");
  joe.setSsn("123-45-6789");
  joe.setRate(20.50);
  joe.setHours(40);

  cout <<"Check for "<<joe.getName()
        << "for "<< joe.getHours() <<" hours.\n";
  joe.printCheck();
  cout<<"\n";
}