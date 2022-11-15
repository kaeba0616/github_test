#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int *p1, *p2;

 // 그냥 아무값이나 저장해둔거네?
 // 안하면 null 값을 접근해서 해줘야된다.
  p1 = new int;  

  *p1 = 42;
  p2 = p1;
  cout << "*p1 == " << *p1 << "\n";
  cout << "*p2 == " << *p2 << "\n";

  *p2 = 53;s
  cout << "*p1 == " << *p1 << "\n";
  cout << "*p2 == " << *p2 << "\n";

  p1 = new int;
  *p1 = 88;
  cout << "*p1 == " << *p1 << "\n";
  cout << "*p2 == " << *p2 << "\n";

  cout << "Hope you got the point of this example!\n";
  return 0;
}