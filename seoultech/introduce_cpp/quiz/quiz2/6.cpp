#include<iostream>
using namespace std;

class One{
  public:
    void f() { g(); cout << "One::f" <<"\n";}
    void g() {cout << "One::g" <<"\n";}
    virtual void h() {cout << "One::h" <<"\n";}
};

class Two: public One{
  public:
    void g() {cout << "Two::g" <<"\n";}
    virtual void h() {f(); cout<<"Two::h" <<"\n";}
};

class Three : public Two{
  public:
    virtual void h() { g(); cout <<"Three::h" <<"\n";}
};

int main(){
  One* a = new Two();
  a->h();
  cout<<"----" <<"\n";

  One* b = new Three();

  b->h();
  cout <<"----"<<"\n";
  b->f();

  return 0;
}