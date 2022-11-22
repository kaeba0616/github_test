// this is the header file hourlyemployee.h.
// this is the interfae for the class HourlyEmployee.
#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include<string>
#include "employee.h"

using std::string;

namespace SavitchEmployees{
  class HourlyEmployee : public Employee{
    public:
      HourlyEmployee();
      HourlyEmployee(string theName, string theSsn, double theWageRate, double theHours);
      void setRate(double newWageRate);
      double getRate() const;
      void setHours(double hoursWorked);
      double getHours() const;
      void printCheck();
    private:
      double wageRate;
      double hours;
  };
}//SavitchEmployees

#endif // HOURLYEMPLOYEE_H