#include <iostream>
using namespace std;

template <class T>

T abs_val(T& var1, T& var2) {
  T res = var1 - var2;
  if (res <= 0) res *= -1;
  return res;
}

int main() {
  int integer1 = 10, integer2 = 20;
  cout << "Absolute value of (" << integer1 << "-" << integer2 << ") is "
       << abs_val(integer1, integer2) << "\n";
  double double1 = 5.5, double2 = 3.1;
  cout << "Absolute value of (" << double1 << "-" << double2 << ") is "
       << abs_val(double1, double2) << "\n";
  char char1 = 'A', char2 = 'C';
  cout << "Absolute value of (" << char1 << "-" << char2 << ") is "
      << abs_val(char1, char2) << "\n";
  return 0;
}
