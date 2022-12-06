#include<iostream>
#include<string>

using namespace std;

class Pet{
  public:
    string name;
    virtual void print();
};
class Dog : public Pet{
  public:
    string breed;
    virtual void print();
};

void Pet::print(){
  cout << name << "\n";
}

void Dog::print(){
  cout << name << " " << breed << "\n";
}

int main(){
  Dog vdog;
  Pet vpet;
  vdog.name = "Tiny";
  vdog.breed = "Great Dane";
  vpet.print();
  vdog.print();
  cout <<"\n";
  vpet = vdog;
  vpet.print();
  vdog.print();
}