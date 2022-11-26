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
    setNetPay(hours*wageRate);
    cout <<"\n_____________________________________________\n";
    cout<<"Pay to the order of " <<getName()<<"\n";
    cout<<"The sum of " <<getNetPay() << "Dollars\n";
    cout<<"______________________________________________\n";
    cout<<"Check Stub: NOT NEGOTIABLE\n";
    cout<<"Employee Number: " <<getSsn() <<"\n";
    cout<<"Hourly Employee. \nHours worked: "<<hours
        <<" RateL "<<wageRate <<" Pay: "<<getNetPay()<<"\n";
    cout<<"______________________________________________\n";
  }
}