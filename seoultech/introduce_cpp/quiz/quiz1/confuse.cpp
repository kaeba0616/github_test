#include<iostream>
using namespace std;

int a,b,c;
void confuse1(int b, int a){
  a+=1;
  b+=1;
  c+=1;
}

void confuse2(int b, int &a){
  a+=2;
  b+=2;
  c+=2;
}


void confuse3(int &b, int a){
  a+=3;
  b+=3;
  c+=3;
}

int main(){
  int a,c;
  a=b=c=1;

  confuse1(a,b);
  confuse2(b,c);
  confuse3(a,c);
  cout<< a<<b<<c<<"\n";
  return 0;
}