#ifndef HOURLY_H
#define HOURLY_H

#include<string>
#include "employee.h"

using std::string;

namespace SavitchEmployees{
  class HourlyEmployee : public Employee{
    public:
      HourlyEmployee();
      HourlyEmployee(const string& theName, const string& theSsn, double theWageRate, double theHours);
      void setRate(double newWageRate);
      double getRate() const;
      void setHours(double hoursWorked);
      double getHours() const;
      void printCheck();
    private:
      double wageRate;
      double hours;
  };
}
#endif