#include<iostream>
using std::cout;

template<class T>
void swapValues(T& variable1, T& variable2){
  T temp;
  temp = variable1;
  variable1 = variable2;
  variable2 = temp;
}

int main(){
  int integer1 = 1, integer2 =2;
  cout << "Original integer values are "
        << integer1 << " " <<integer2 <<"\n";
  swapValues(integer1, integer2);
  cout << "Swapped integer values are "
        << integer1 <<" " <<integer2 <<"\n";
  
  char symbol1 = 'A', symbol2 = 'B';
  cout << "Original character values are "
        << symbol1 << " " <<symbol2 <<"\n";
  swapValues(symbol1, symbol2);
  cout << "Swapped character values are "
        << symbol1 <<" " <<symbol2 <<"\n";
  return 0;
}