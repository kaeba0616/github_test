#include<iostream>
using namespace std;

typedef int* Intptr;

void sneaky(Intptr temp);

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  Intptr p;
  p =new int;
  *p =77;
  cout << "Before call to function *p == " << *p <<"\n";

  sneaky(p);
  
  cout<<"After call to function *p ==" << *p <<"\n";

  return 0;
}

void sneaky(Intptr temp){
  *temp = 99;
  cout << "Inside function call *temp == "<<*temp <<"\n";
}