#include<iostream>
using namespace std;

template<typename T>
void fun(const T& x){
  static int count =0;
  cout << "x= " << x <<" count = "<<count <<"\n";
  ++count;
  return;
}

int main(){
  fun<int> (1);
  cout << "\n";
  fun<int>(1);
  cout <<"\n";
  fun<double>(1.1);
  cout <<"\n";
  return 0;
}

//x= 1 count = 0
//x= 1 count = 1
//x= 1.1 count = 0
