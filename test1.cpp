#include<iostream>
using namespace std;
int b =3;
int main(){
  int arr=30;
  int *p = &arr;
  
  cout<<*p<<"\n";
  cout<<p<<"\n";
  cout<<&arr<<"\n";
  arr += b;
  *p = arr;
  
  cout<<*p<<"\n";
  cout<<p<<"\n";
  cout<<&arr<<"\n";
  exit
}