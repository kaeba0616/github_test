#include<iostream>
#include<cctype>
using namespace std;

int main(){
  char str;
  do{
    cin.get(str);
    if(isupper(str)) continue;
    cout<<str;
  }while(str != '\n');
}