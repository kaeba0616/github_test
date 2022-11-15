#include<iostream>
using namespace std;

typedef int* intp;

void fillArray(int a[], int size);
//precondition : size is the size of the array a.
//postcondition : a[0] through a[size-1] have been
//filled with values read from the keyboard.

int search(int a[], int size, int target);
//precondition : size is the size of the array a.
//the array element a[0] through a[size-1] have values.
//if target is in the arraym returns the first index of target.
//if target is not in the array return -1.

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cout<< "This program searches a list of numbers. \n";

  int arraySize;
  
  cout<< "How many numbers will be on the list? ";
  cin>> arraySize;
  intp a;
  a= new int[arraySize];

  fillArray(a, arraySize);
  int target;
  cout<<"Enter a value to search for: ";
  cin>>target;
  int location = search(a, arraySize, target);
  if(location == -1)
    cout<<target<<" is not in the array.\n";
  else
    cout<< target << " is element "<<location <<" in the array.\n";
  
  delete [] a;
  return 0;
}

void fillArray(int a[], int size){
  cout<< "Enter " <<size<<" integers.\n";
  for(int index = 0; index < size; index++)
    cin >> a[index];
}

int search(int a[], int size, int target){
  int index = 0;
  while((a[index] != target) && (index <size))
    index++;
  if(index == size) // if target is not in a.
    index = -1;
  return index;
}