#include <iostream>
#include "sale.h"
#include "discountsale.h"
using std::cout;
using std::endl;
using std::ios;
using namespace SavitchSale;

int main(){
  Sale simple(10.00);
  DiscountSale discount(11.00, 10);

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  if(discount <simple){
    cout << "Discounted item is cheaper.\n";
    cout << "Savings is $ " << simple.savings(discount)<<"\n";
  }
  else{
    cout << "Discounted item is not cheaper.\n";
  }
  return 0;
}