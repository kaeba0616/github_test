#include<iostream>
using namespace std;

class Adder{
  private:
    int sum;
  public:
    Adder() : sum(0){};
    Adder(int newi) : sum(newi){};
    void operator +=(int newi){sum += newi;}   
    friend ostream& operator <<(ostream& os ,const Adder& adder); 
    friend bool operator==(const Adder& x,const Adder& y);
};

bool Adder::operator==(const Adder& x, const Adder& y){
  return (x.sum == y.sum);
}

ostream& operator<<(ostream& os, const Adder& adder){
  return os<< adder.sum;
}

int main(){
  Adder sum1;
  Adder sum2(2);

  cout <<"sum1 is "<< sum1 <<"\n";
  cout <<"sum1 is "<< sum2 <<"\n\n";
  
  sum1 += 5;
  sum2 += -3;
  cout << "after adding\n";
  cout <<"sum1 is "<< sum1 <<"\n";
  cout <<"sum1 is "<< sum2 <<"\n";
  
  if(sum1 == sum2) cout << "sum1 and sum2 are the same\n";
}