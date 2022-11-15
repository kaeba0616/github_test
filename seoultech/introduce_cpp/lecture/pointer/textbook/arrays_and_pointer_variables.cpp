#include <iostream>
using namespace std;

typedef int* intptr;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  intptr p;
  int a[10];
  int index;

  for (index = 0; index < 10; index++) a[index] = index;

  p = a;

  for (index = 0; index < 10; index++) cout << p[index] << " ";
  cout << "\n";

  for (index = 0; index < 10; index++) p[index] = p[index] + 1;
  for (index = 0; index < 10; index++) cout << a[index] << " ";
  cout << "\n";

  return 0;
}