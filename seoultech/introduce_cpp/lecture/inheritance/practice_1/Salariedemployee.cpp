// this is the file salariedemployee.cpp
// this is the implementation for the class SalariedEmployee.
// this interface for the class SalariedEmployee is in
// the header file salariedemployee.h
#include<iostream>
#include<string>
#include "salariedemployee.h"
using std::string;
using std::cout;
using std::endl;

namespace SavitchEmployees{
  SalariedEmployee::SalariedEmployee() :Employee(), salary(0){
    //deliberately empty
  }

  SalariedEmployee::SalariedEmployee(const string& newName, const string& newNumber, double newWeeklyPay)
    : Employee(newName, newNumber), salary(newWeeklyPay){
      //deliberately empty
  }

  double SalariedEmployee::getSalary() const{
    return salary;
  }

  void SalariedEmployee::setSalary(double newSalary){
    salary = newSalary;
  }  

  void SalariedEmployee::printCheck(){
    setNetPay(salary);
    cout<<"\n_____________________________________________\n";
    cout<<"Pay to the order of " << getName()<<"\n";
    cout<<"The sum of "<<getNetPay() << " Dollars\n";
    cout<<"_____________________________________________\n";
    cout<<"Check Stub NOT NEGOTIABLE \n";
    cout<<"Employee Number: " << getSsn() <<"\n";
    cout<<"Salaried Employee. Regular Pay: "
        <<salary <<"\n";
    cout<<"_____________________________________________\n";
  }
} //SavitchEmployees