#include<iostream>
#include<cstdlib>
#include<cmath>
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

    friend bool operator <(const Money& amount1, const Money& amount2);
    friend bool operator <=(const Money& amount1, const Money& amount2);
    friend bool operator >(const Money& amount1, const Money& amount2);
    friend bool operator >=(const Money& amount1, const Money& amount2);

    const Money percent(int percentFigure) const;

    friend const Money operator + (const Money& amount1, const Money& amount2);
    friend const Money operator - (const Money& amount1, const Money& amount2);
    friend bool operator == (const Money& amount1, const Money& amount2);
    friend const Money operator - (const Money& amount);
    friend ostream& operator << (ostream& outputStream, const Money& amount);
    friend istream& operator >> (istream& inputStream, Money& amount);
  private:
    int dollars;
    int cents;

    int dollarsPart(double amount) const;
    int centsPart(double amount) const;
    int round(double number) const;        
};

int main(){

  cout<<fixed;
  cout.showpoint;
  cout.precision(2);
  Money yourAmount, myAmount(10,9);
  int pct;
  cout << "Enter an amount of money: ";
  cin >> yourAmount;
  cout << "Enter a percent you wish to take of your amount\n";
  cin >> pct;
  cout<<"Your amount is "<< yourAmount <<"\n";
  cout<<"My amount is "<< myAmount <<"\n";
  cout<<pct<<"% of your amount is "<<yourAmount.percent(pct)<<"\n"; 
  cout<<"15% of my amount is "<<myAmount.percent(15)<<"\n";

  if(yourAmount == myAmount)
    cout<< "We have the same amount.\n";
  else 
    cout<< "One of us is richer.\n";
  Money sumAmount = yourAmount +myAmount;
  cout<< yourAmount << " + "<<myAmount
    <<" equals "<<sumAmount<<"\n";
  Money diffAmount = yourAmount - myAmount;
  cout << yourAmount <<" - "<<myAmount
    <<" equals "<< diffAmount<<"\n";
  if(yourAmount >= myAmount)cout<<"Your amount is greater than or equal to my Amount.\n";
  else cout<<"Your amount is less than My amount.\n";
  if(sumAmount > diffAmount)cout<<"The sum of our Amounts is greater than the difference.\n";
  else cout<< "The difference is greater than or equal to the sum of our Amounts";
  if(yourAmount > myAmount)cout<<"Your amount is greater than my Amount.\n";
  else cout<<"Your amount is less than or equal to My amount.\n";
  if(sumAmount > diffAmount)cout<<"The sum of our Amounts is greater than the difference.\n";
  else cout<< "The difference is greater than or equal to the sum of our Amounts";
  return 0;
}


ostream& operator <<(ostream& outputStream, const Money& amount){
  int absDollars = abs(amount.dollars);
  int absCents = abs(amount.cents);
  if(amount.dollars <0 || amount.cents<0)
    outputStream <<"$-";
  else 
    outputStream <<"$";
  outputStream << absDollars;

  if(absCents >= 10)
    outputStream<< "."<<absCents;
  else 
    outputStream<<".0"<<absCents;
  return outputStream;
}

istream& operator >> (istream& inputStream, Money& amount){
  char dollarSign;
  inputStream>>dollarSign;
  if(dollarSign != '$'){
    cout<<"No dollar sign in Money input.\n";
    exit(1);  
  }
  double amountAsDouble;
  inputStream >> amountAsDouble;
  amount.dollars = amount.dollarsPart(amountAsDouble);
  amount.cents = amount.centsPart(amountAsDouble);

  return inputStream;
}

const Money operator +(const Money& amount1, const Money& amount2){
  int allCents1 = amount1.cents + amount1.dollars*100;
  int allCents2 = amount2.cents + amount2.dollars*100;
  int sumAllCents = allCents1 + allCents2;
  int absAllCents = abs(sumAllCents);
  int finalDollars = absAllCents/100;
  int finalCents = absAllCents%100;
  
  if(sumAllCents<0){
    finalDollars = -finalDollars;
    finalCents = -finalCents;
  }
  return Money(finalDollars, finalCents);
}

const Money operator - (const Money& amount1, const Money& amount2){
  int allCents1 = amount1.cents + amount1.dollars*100;
  int allCents2 = amount2.cents + amount2.dollars*100;
  int diffAllCents = allCents1- allCents2;
  int absAllCents = abs(diffAllCents);

  int finalDollars = absAllCents/100;
  int finalCents = absAllCents%100;

  if(diffAllCents<0){
    finalDollars = -finalDollars;
    finalCents= -finalCents;
  }
  return Money(finalDollars, finalCents);
}

bool operator == (const Money& amount1, const Money& amount2){
  return ((amount1.dollars == amount2.dollars) && (amount1.cents == amount2.cents));
}

const Money operator - (const Money& amount){
  return Money(-amount.dollars, -amount.cents);
}

Money::Money():dollars(0), cents(0){}
Money::Money(double amount):dollars(dollarsPart(amount)), cents(centsPart(amount)){}
Money::Money(int theDollars):dollars(theDollars), cents(0){}
Money::Money(int theDollars, int theCents){
  if((theDollars<0)&&(theCents >0) || (theDollars >0 && theCents <0)){
    cout<<"Inconsistent money data.\n";
    exit(1);
  }
  dollars = theDollars;
  cents = theCents;
}

double Money::getAmount() const{
  return (dollars + cents*0.01);
}

int Money::getDollars()const{
  return  dollars;  
}

int Money::getCents()const{
  return  cents;  
}

int Money::dollarsPart(double amount) const{
  return static_cast<int>(amount);
}

int Money::centsPart(double amount) const{
  double doubleCents = amount*100;
  int intCents = (round(fabs(doubleCents)))%100;
  if(amount<0)
    intCents = -intCents;
  return intCents;
}

int Money::round(double number) const{
  return static_cast<int>(floor(number+0.5));
}

const Money Money::percent(int percentFigure) const{
  int dollars_percent = (dollars*percentFigure)/100;
  int cents_percent = (dollars*percentFigure)%100 +(cents*percentFigure)/100;
  return Money(dollars_percent, cents_percent);
  // ------------------------------------------------------- 
}

bool operator <(const Money& amount1, const Money& amount2){
  if(amount1.dollars < amount2.dollars){
    return true;
  }else if(amount1.dollars == amount2.dollars){
    if(amount1.cents < amount2.cents){   
    return true;
    }
  }
  return false;
}

bool operator <=(const Money& amount1, const Money& amount2){
  if(amount1.dollars < amount2.dollars){
    return true;
  }else if(amount1.dollars == amount2.dollars){
    if(amount1.cents <= amount2.cents){   
    return true;
    }
  }
  return false;
}

bool operator >(const Money& amount1, const Money& amount2){
  if(amount1.dollars > amount2.dollars){
    return true;
  }else if(amount1.dollars == amount2.dollars){
    if(amount1.cents > amount2.cents){   
    return true;
    }
  }
  return false;
}

bool operator >=(const Money& amount1, const Money& amount2){
  if(amount1.dollars > amount2.dollars){
    return true;
  }else if(amount1.dollars == amount2.dollars){
    if(amount1.cents >= amount2.cents){   
    return true;
    }
  }
  return false;
}



