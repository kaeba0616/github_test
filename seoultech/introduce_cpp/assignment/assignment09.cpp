#include<iostream>
using namespace std;

int main(){
  double *p, v;
  p = &v;
  *p = 99.99;
  cout<< v <<"\n" << *p;
  // int *p1, *p2;
  // p1 = new int;
  // p2 = new int;
  // *p1 =10;
  // *p2 =20;
  // cout<<*p1 <<" "<<*p2<<"\n";
  // *p1 = *p2;
  // cout<<*p1 <<" "<<*p2<<"\n";
  // *p1 = 30;
  // cout<<*p1 <<" "<<*p2<<"\n";
}