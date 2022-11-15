#include<iostream>
using namespace std;

int main(){
  int *p1, *p2;

  p1 = new int;
  *p1 = 42;
  p2 = p1;
  cout<< "*p1 == "<<*p1 <<"\n";
  cout<< "*p2 == "<<*p2 <<"\n";
  
  *p2 = 53;
  cout<< "*p1 == "<<*p1 <<"\n";
  cout<< "*p2 == "<<*p2 <<"\n";
  
  p1 = new int;
  *p1 = 88;
  cout<< "*p1 == "<<*p1 <<"\n";
  cout<< "*p2 == "<<*p2 <<"\n";
  
  cout <<"Hope you got the point of this example!\n";
  return 0;
}