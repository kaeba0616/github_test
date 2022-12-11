#include<iostream>
using namespace std;
int main(){
  int *entry;
  entry = new int[10];

  cout << "Enter 10 integers: \n";
  for(int i = 0; i < 10; i++) cin >> entry[i];
  for(int i = 0; i < 10; i++) cout << entry[i] <<" ";
  cout <<"\n";
  return 0;
}