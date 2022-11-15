#include<iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int a[10];
  int arraySize = 10;
  int *p = a;  //equal to int *p;  p = a;

  int i;
  for(i =0; i<arraySize; i++)
    a[i]=i;
  for(i=0; i<arraySize; i++)
    cout<< p[i] <<" ";
  cout<<"\n";


  /*
  int *entry;
  entry = new int[10];

  for(int i=0; i<10; i++)
    cin>> entry[i];

  for(int i=0; i<10; i++)
    cout<< entry[i]<<"\n";

  delete [] entry;

  return 0;
  */
}