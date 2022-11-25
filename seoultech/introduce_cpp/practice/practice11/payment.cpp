// payment.cpp

// This program introduces inheritance through a problem of
//   creating two types of Payment, Cash and Credit. The
//   PaymentDetials method outputs in English a sentence that describes
//   the payment.

#include<iostream>
#include<string>

using namespace std;

//Base class to store a payment amount and get a description

class Payment
{
  public:
    Payment();
    Payment(float amount);
    void setPayment(float amount);
    float getPayment();
    void paymentDetails();
  private:
    float amount;
};

Payment::Payment() : amount(0){}

Payment::Payment(float amt) : amount(amt){}

void Payment::setPayment(float amt){
  amount = amt;
}

float Payment::getPayment(){
  return amount;
}

void Payment::paymentDetails(){
  cout << "The payment amount is " <<amount<<"\n";
}

class CashPayment : public Payment{
  public:
    CashPayment();
    CashPayment(float amt);
    void paymentDetails();
    void setCashPayment(float amt);
    float getCashPayment();
  private:
    float Cash_amount;
};

CashPayment::CashPayment() : Cash_amount(0){}

CashPayment::CashPayment(float amt) : Cash_amount(amt){}

void CashPayment::setCashPayment(float amt){
  Cash_amount =amt;
}

float CashPayment::getCashPayment(){
  return Cash_amount;
}

void CashPayment::paymentDetails(){
  cout <<"The cash payment amount is "<<Cash_amount<<"\n";
}

class CreditPayment : public Payment{
  public:
    CreditPayment();
    CreditPayment(float amt, string newN, string newED, string newCCN);
    string getName();
    string getExpirationDate();
    string getCreditCardNumber();
    void setName(string newN);
    void setExpirationDate(string newED);
    void setCreditCardNumber(string newCCN); 
    void paymentDetails();    

  private:
    float credit_amount;
    string name;
    string expirationDate;
    string creditCardNumber;
};

CreditPayment::CreditPayment() : 
  credit_amount(0), name(""), expirationDate(""), creditCardNumber(""){}

CreditPayment::CreditPayment(float amt, string newN, string newED, string newCCN) :
  credit_amount(amt), name(newN), expirationDate(newED), creditCardNumber(newCCN){}

string CreditPayment::getName(){
  return name;
}

string CreditPayment::getExpirationDate(){
  return expirationDate;
}

string CreditPayment::getCreditCardNumber(){
  return creditCardNumber;
}

void CreditPayment::setName(string newN){
  name = newN;
}

void CreditPayment::setExpirationDate(string newED){
  expirationDate = newED;
}

void CreditPayment::setCreditCardNumber(string newCCN){
  creditCardNumber = newCCN;
}

void CreditPayment::paymentDetails(){
  cout<<"The credit card payment amount is "<<credit_amount<<"\n";
  cout<<"The name on the card is: "<<name<<"\n";
  cout<<"The expiration date is: "<<expirationDate<<"\n";
  cout<<"The credit card number is: "<<creditCardNumber<<"\n";  
}

int main(){
  CashPayment cash1(50.5), cash2(20.45);
  CreditPayment credit1(10.5, "Fred", "10/5/2010","123456789");
  CreditPayment credit2(100, "Barney", "11/15/2009", "987654321");

  cout<<"Cash 1 details: "<<"\n";
  cash1.paymentDetails();
  cout<<"\n";
  cout<<"Cash 2 details: "<<"\n";
  cash2.paymentDetails();
  cout<<"\n";

  cout<<"Credit 1 details: "<<"\n";
  credit1.paymentDetails();
  cout<<"\n";
  cout<<"Credit 2 datails: "<<"\n";
  credit2.paymentDetails();
  cout<<"\n";

  return 0;
}

