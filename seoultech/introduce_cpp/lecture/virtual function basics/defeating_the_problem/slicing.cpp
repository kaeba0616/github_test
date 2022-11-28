#include<string>
#include<iostream>
using namespace std;

class Pet{
  public :
    string name;
    virtual void print() const;
};

class Dog : public Pet{
  public:
    string breed;
    virtual void print() const;
};

int main(){
  Dog vdog;
  Pet vpet;

  vdog.name = "Tiny";
  vdog.breed  = "Great Dane";
  vpet = vdog;
  cout <<"The slicing problem: \n";
  //vpet.breed; is illegal since class Pet has no member named breed.
  vpet.print();
  cout << "Note that it was print from Pet that was invoked.\n";

  cout << "The slicing problem defeated:\n";
  Pet *ppet;
  Dog *pdog;
  pdog = new Dog;
  pdog->name = "Tiny";
  pdog->breed = "Great Dane";
  ppet = pdog;
  ppet->print();
  pdog->print();
  // these two print the same output; name: Tiny bread: Great Dane

  return 0;
}

void Dog::print() const{
  cout << "name: "<<name <<"\n";
  cout << "bread: "<<bread <<"\n";
}

void Pet::print() const{
  cout << "name: "<<name <<"\n";
}

