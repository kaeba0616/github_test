#include<bits/stdc++.h>
using namespace std;

int main(){
  char c;
  int num= 0;
  cout<<"Enter a character from a to z:";
  cin>>c;

  switch(c){
    case 'a':
    case 'b': num =5;
    case 'd': num += 7;
    default: num = 33;
  }
  cout<<num<<"\n";
}