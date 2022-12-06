#include <iostream>
using namespace std;
int func(int i) { return i * 5; }

int junk(int i);
int main() {
  cout << "junk(5) = " << junk(5) << "\n";
}
