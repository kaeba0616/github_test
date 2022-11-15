#include<iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int *p1, *p2;
  p1 = new int;
  p2 = new int;
  *p1 = 10;
  *p2 = 20;
  cout<< *p1 << " " <<*p2 <<"\n";
  *p1= *p2;
  cout<< *p1 << " " <<*p2 <<"\n";
  *p1 = 30;
  cout<< *p1 << " " <<*p2 <<"\n";  
  
  
  /*
  int *p1, *p2;
  p1 = new int;
  p2 = new int;
  
  *p1 = 10;
  *p2 = 20;

  cout<< *p1 <<" " <<*p2 <<"\n";
  p1 = p2;
  cout<< *p1 <<" " <<*p2 <<"\n";
  *p2 = 30;
  cout<< *p1 <<" " <<*p2 <<"\n";
 */ 
}