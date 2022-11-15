#include<bits/stdc++.h>
using namespace std;

class Money{
  public: 
    Money();
    Money(double amount);
    Money(int theDollars, int theCents);
    Money(int theDollars);
    double getAmount() const;
    int getDollars() const;
    int getCents() const;
    void input();
    void output() const;
  private:
    int dollars;
    int cents;
    int dollarPart(double amount) const;
    int centsPart(double amount) const;
    int round(double number) const;     // 반올림  
};

const Money operate +(const Money& amount1, const Money& amount2){
  int allCent1 = amount1.getCents() + amount1.getDollars()*100;
  int allCent2 = amount2.getCents() + amount2.getDollars()*100;
  int sumAllCents = allCents1 + allCent2;
  int absAllCents = abs(sumAllCents);
  int finalDollars = absAllCents/100;
  int finalCents = absAllCents%100;

  if(sumAllCents<0){
    finalDollars = -finalDollars;
    finalCents = -finalCents;
  }
  return Money(finalDollars, finalCents);
}
bool operator ==(const Money& amount1, const Money& amount2);


int main(){ 
  Money yourAmount, myAmount(10,9);
  cout<<"Enter an amount of money: ";
  yourAmount.input();

  cout<<"Your amount is ";
  yourAmount.output();
  cout<<"\n";
  cout<<"My amount is ";
  myAmount.output();
  cout<<"\n";

  if(yourAmount == myAmount)
    cout<< "We have the same amounts.\n";
  else
    cout<< "One of us is richer.\n";

  Money ourAmount = yourAmoutn + myAmount;
  yourAmount.output(); cout<< " + "; myAmount.output();
  cout<<"equals "; ourAmount.output(); cout<<"\n";

  Money diffAmount = yourAmount - myAmount;
  yourAmount.output(); cout<<" - "; myAmount.output();
  cout<< "equals "; diffAmount.output(); cout<<"\n";
  
  return 0;
  }