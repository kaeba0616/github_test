#include<iostream>
using namespace std;

class Enemy{
  public:
    Enemy() {cout << "E ctor" <<"\n";}
    Enemy(int i) { cout << "E ctor "<< i <<"\n";}
    Enemy(const Enemy& src) {cout << "E copy ctor" << "\n";}
    Enemy& operator=(const Enemy& rhs) {cout << "E=" <<"\n";}
    virtual ~Enemy() {cout << "E dtor" <<"\n";}
    void hornet(int i= 7) const{
      cout << "E::hornet " << i <<"\n";
    }
};

class Scott :public Enemy{
  public:
    Scott() : Enemy(1){cout << "S ctor"<<"\n";}
    Scott& operator=(const Scott& rhs) {cout <<"S=" <<"\n";}
    virtual ~Scott() { cout << "S dtor" <<"\n";}
    void hornet(int i =7) const {
      cout << "S::hornet "<< i <<"\n";
    } 
};

void foo(const Enemy& inKlep){
  Enemy theEnemy;
  inKlep.hornet(2);
}

int main(){
  Scott kleper;
  Enemy blah = kleper;
  foo(kleper);
  foo(3);
  Enemy a;
  a = 1;
  cout << "Done!" <<"\n";
}
