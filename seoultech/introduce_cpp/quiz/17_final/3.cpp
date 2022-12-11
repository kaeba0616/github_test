#include<iostream>
using namespace std;

class Base{
  public:
    Base() {cout << "Constructor : Base\n";}
    virtual ~Base() {cout << "Destructor : Base\n";}
};

class Derived : public Base{
  public:
    Derived() {cout << "Constructor : Derived\n";}
    ~Derived() {cout << "Destructor : Derived\n";}
};

int main(){
  Base *Var = new Derived();
  delete Var;

  cout <<"\n";
 
  Derived*d= new Derived();
  Base *b = d;
  delete b;

  return 0;
}

//Consturctor : Base
//Consturctor : Derived
//Destructor : Derived
//Destructor : Base

//FTFF T(F) F(T) ?(F) T F(T) F

//1 / 1,3,5 / 4 / 2 / 2 / 5 (1)

