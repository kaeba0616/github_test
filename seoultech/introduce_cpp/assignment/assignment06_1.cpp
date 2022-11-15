#include<iostream>
using namespace std;

class A{
  public:
    A(){cout<<"asdasadsd!!";};
    A(int x, char y) :xx(x), yy(y){cout<<"ppp";};
  private:
    int xx;
    int yy;

};

int main(){
  A x;

}