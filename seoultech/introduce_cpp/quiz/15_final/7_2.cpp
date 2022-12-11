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

  // here, write a for loop that will display the contents vec
  // on the screen, separated by spaces starting at the last elements
  // in the vector and proceeding to the first.
  // use iterators for the loop control.
  for (itr = vec.rbegin(); itr != vec.rend(); itr++) cout << *itr << " ";
  cout << "\n";

  return 0;
}

//1.
// a. F 
// b. F
// c. T
// d. T
// e. F
// f. T
// g. F
// h. T
// i. F  (T)
// j. F  (T)

//2. 
// a. 1,2,3  (1,2,3,4)
// b. 3      (2)
// c. 1,3,5 
// d. 4      (5)
// e. 3      (2,3)
// f. 4 ?    (2,3,4,6)