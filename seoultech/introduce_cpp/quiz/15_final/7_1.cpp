#include <iostream>
#include <vector>
using namespace std;

int main() {
  // here, write a definition of an iterator
  // for a vector named vec of int values.
  // And, declare vec.
  std::vector<int>::iterator itr;
  std::vector<int> vec;

  for (int i = 0; i < 10; i++) vec.push_back(i);

  // here, write a for loop that display the contents vec
  // on the screen, separated by spaces.
  // use iterators for the loop control.
  for (itr = vec.begin(); itr != vec.end(); itr++) cout << *itr << " ";
  cout << "\n";

  return 0;
}