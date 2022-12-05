#include<iostream>
using namespace std;

typedef int* IntPointer;

void sneaky(IntPointer temp);

int main(){
  IntPointer p;
  p = new int;
  *p = 77;
  cout<< "before call to function *p == " << *p <<"\n";
  sneaky(p);
  cout<< "After call to function *p == "<< *p <<"\n";
  return 0;
}

void sneaky(IntPointer temp){
  *temp = 99;
  cout<< "Inside function call *temp == " <<*temp<<"\n";
}