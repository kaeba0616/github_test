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
  return 0;
}

//Consturctor : Base
//Consturctor : Derived
//Destructor : Derived
//Destructor : Base