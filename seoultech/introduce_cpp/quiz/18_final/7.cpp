#include <iostream>
#include <string>
using namespace std;

class Payment {
 public:
  Payment();
  Payment(float amount);
  void setPayment(float amount);
  float getPayment();
  void paymentDetails();

 private:
  float amount;
};

Payment::Payment() : amount(0) {}

Payment::Payment(float amt) : amount(amt) {}

void Payment::setPayment(float amt) { amount = amt; }

float Payment::getPayment() { return amount; }

void Payment::paymentDetails() {
  cout << "The payment amount is " << amount << "\n";
}

class CashPayment : public Payment {
 public:
  CashPayment() : Payment(){};
  CashPayment(float amt) : Payment(amt){};
  void paymentDetails();
};

void CashPayment::paymentDetails() {
  cout << "The cash payment amount is " << getPayment() << "\n";
}

class CreditCardPayment : public Payment {
 public:
  CreditCardPayment()
      : Payment(), name(""), expiration(""), creditcard_variable(""){};
  CreditCardPayment(float amt, string newName, string newExp, string newCrdVar)
      : Payment(amt),
        name(newName),
        expiration(newExp),
        creditcard_variable(newCrdVar){};
  void paymentDetails();

 private:
  string name;
  string expiration;
  string creditcard_variable;
};

/*
CreditCardPayment::CreditCardPayment(float amt, string name, string expriation, string creditcard) : Payment(amt)
{
  this->name= name;
  this->expiration = expiration;
  this->creditcard= creditcard;
}
*/
void CreditCardPayment::paymentDetails() {
  cout << "The credit card payment amount is " << getPayment() << "\n";
  cout << "The name on the card is: " << name << "\n";
  cout << "The expiration date is: " << expiration << "\n";
  cout << "The credit card number is: " << creditcard_variable << "\n";
}

int main() {
  CashPayment cash1(50.5), cash2(20.45);
  CreditCardPayment credit1(10.5, "Fred", "10/5/2010", "123456789");
  CreditCardPayment credit2(100, "Barney", "11/15/2009", "987654321");
  
  cout << "Cash 1 details: "<<"\n";
  cash1.paymentDetails();
  cout <<"\n";
  cout << "Cash 2 details: "<<"\n";
  cash2.paymentDetails();
  cout <<"\n";
  
  cout << "Credit 1 details: "<<"\n";
  credit1.paymentDetails();
  cout <<"\n";
  
  cout << "Credit 2 details: "<<"\n";
  credit2.paymentDetails();
  cout <<"\n";
}
