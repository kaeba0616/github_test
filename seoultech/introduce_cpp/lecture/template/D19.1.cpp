//Program to demonstrate STL iterators.
#include<iostream>
#include<vector>
using std::cout;
using std::vector;

int main(){
  vector<int> container;
  for(int i=1; i<=4; i++) container.push_back(i);
  cout <<"Here is what is in the container: \n";
  std::vector<int>::iterator p;
  for(p =container.begin(); p != container.end(); p++) cout<< *p <<" ";
  cout <<"\n";

  cout <<"Setting entries to 0:\n";

  for(p = container.begin(); p != container.end(); p++) *p =0;
  cout <<"Container now contains: \n";

  for( p = container.begin(); p != container.end(); p++)  cout<< *p << " ";
  cout <<"\n";

  return 0;   
}