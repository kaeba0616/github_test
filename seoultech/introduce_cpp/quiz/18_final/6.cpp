#include <iostream>
using namespace std;

class B {
 public:
  void f() {
    cout << "B::f"
         << "\n";
  }
  virtual void g() {
    f();
    cout << "B::g"
         << "\n"
  };
};

class D : public B {
 public:
  void f() {
    cout << "D::f"
         << "\n";
  }
  virtual void h() {
    g();
    f();
    cout << "D::h"
         << "\n";
  }
};

int main() {
  B *one = new B();
  D *duo = new D();
  B *two = duo;
  one->g();
  cout << "---"
       << "\n";
  duo->h();
  cout << "---"
       << "\n";
  two->g();
  return 0;
}

// B::f
// B::g

// B::f
// B::g
// D::f
// D::h

// B::f
// B::g