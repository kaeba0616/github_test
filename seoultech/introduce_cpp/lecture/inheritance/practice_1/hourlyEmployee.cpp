// this is the file : hourlyemployee.cpp
// this is the implementation for the class HourlyEmployee.
// the interface for the class HourlyEmployee is in
// the header file hourlyemployee.h.

#include<string>
#include<iostream>
#include "hourlyemployee.h"
using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees{
  HourlyEmployee::HourlyEmployee() : Employee(), wageRate(0), hours(0){
    //deliberately empty
  }

  HourlyEmployee::HourlyEmployee(const string& theName, const string& theNumber, double theWageRate, double theHours)
    : Employee(theName, theNumber), wageRate(theWageRate), hours(theHours){
      //deliberately empty
  }

  void HourlyEmployee::setRate(double newWageRate){
    wageRate = newWageRate;
  }
  
  double HourlyEmployee::getRate() const{
    return wageRate;
  }

  void HourlyEmployee::setHours(double hoursWorked){
    hours = hoursWorked;
  }

  double HourlyEmployee::getHours() const{
    return hours;
  }

  void HourlyEmployee::printCheck(){
    setNetPay(hours * wageRate);
    cout <<"\n_____________________________________________\n";
    cout<<"Pay to the order of " <<getNetPay()<<"\n"
    cout<<"______________________________________________\n";
    cout<<"Check Stub: NOT NEGOTIABLE\n";
    cout<<"Employee Number: " <<getSsn() "\n";
    cout<<"Hourly Employee. \nHours worked: "<<houts
        <<" RateL "<<wageRate <<" Pay: "<<getNetPay()<<"\n";
    cout<<"______________________________________________\n";
  }
} //SavitchEmployees