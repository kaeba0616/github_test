#include<string>
#include<iostream>
#include "hourlyemployee.h"
using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees{
  HourlyEmployee::HourlyEmployee() : Employee(), wageRate(0) ,hours(0){}
  HourlyEmployee::HourlyEmployee(const string& theName, const string& theNumber, double theWageRate, double theHours){}

  void HourlyEmployee::setRate(double newWageRate){
    wageRate = newWageRate;
  } 

  double HourlyEmployee::getRate()const{
    return wageRate;
  }

  void HourlyEmployee::setHours(double hoursWorked){
    hours = hoursWorked;
  }
  double HourlyEmployee::getHours() const{
    return hours;
  }

  void HourlyEmployee::printCheck(){
    setNetPay(hours* wageRate);
    cout<<"Yes";
  }
}