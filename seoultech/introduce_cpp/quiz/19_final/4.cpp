#include <iostream>
using namespace std;

class C {
 public:
  void m1();
  virtual void m2() = 0;
  void m3(char& a);
};
void C::m1() { cout << "Hello"; }
void C::m3(char& x) { x = '!'; }

class D : public C{
  public:
    void m1();
    void m2();
};

void D::m1() {cout << "summer";}
void D::m2() {cout << ", World";}

int main() {
  C* c = new D();
  char x = 'F';
  D d;
  c->m1();
  c->m2();
  c->m3(x);
  cout << x <<"\n";
  return 0;
}
