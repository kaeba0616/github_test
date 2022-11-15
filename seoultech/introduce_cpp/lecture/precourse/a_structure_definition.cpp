#include<iostream>
using namespace std;

struct CDAccountV1{
  double interestRate;
  double balance;
  int term;
};

void getData(CDAccountV1& theAccount);

int main(){
  CDAccountV1 account;
  getData (account);
    double rateFraction, interest;
    rateFraction = account.interestRate/100.0;
    interest =account.balance*(rateFraction*(account.term)/12.0);
    account.balance += interest;

    cout<<fixed;
    cout.showpoint;
    cout.precision(2);
    cout <<"when your CD matrue in "
          <<account.term<<" months,\n"
          <<"It will have a balance of $"
          << account.balance << "\n";

    return 0;

}

void getData(CDAccountV1& theAccount){
  cout<< "Enter account balance : ";
  cin>>theAccount.balance;
  cout<<"Enter account interest rate : ";
  cin >>  theAccount.interestRate;
  cout << "Enter the nunmber of months until maturity : ";
  cin >> theAccount.term;
}

/*
  can initalize at declaration

  struct Data{
    int month;
    int day;
    int year;
  };
  Date dueDate = (12, 31, 2003);


*/