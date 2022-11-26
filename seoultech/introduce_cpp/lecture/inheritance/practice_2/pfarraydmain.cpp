#include<iostream>
#include "pfarraydbak.h"
using std::cin;
using std::cout;
using std::endl;

void testPFArrayDBak();

int main(){
  cout<<"This program tests the class PFArrayDBak.\n";
  char ans;
  do{
    testPFArrayDBak();
    cout<<"Test again? (y/n) ";
    cin >>ans;
  }while((ans == 'y') || (ans == 'Y'));

  return 0;
}

void testPFArrayDBak(){
  int cap;
  cout<<"Enter capacity of this super array: ";
  cin>> cap;
  PFArrayDBak a(cap);

  cout << "Enter up to " <<cap<<" nonnegative numbers.\n";
  cout << "Place a nagative number at the end.\n";

  double next;
  cin >> next;
 
  while((next >= 0) && (!a.full())){
    a.addElement(next);
    cin>>next;
  }
  if(next >= 0){
    cout<< "Could not read all numbers. \n";
    while(next >=0) cin>> next;
  }
  int count = a.getNumberUsed();
  cout << "The following "<< count
       << " numbers read and stored:\n";
  int index;
  for(index = 0; index < count; index++)  cout<<a[index] <<" ";
  cout<<"\n";

  cout <<"Backing up array.\n";
  a.backup();
  cout <<"Emptying array.\n";
  a.emptyArray();
  cout << a.getNumberUsed()
       << " numbers are now stored in the array.\n";
  cout <<"Restoring array.\n";
  a.restore();
  count = a.getNumberUsed();
  cout << "The following " << count
       << " numbers are now stored:\n";
  for(index =0; index < count; index++) cout <<a[index] <<" ";
  cout<<"\n";
}