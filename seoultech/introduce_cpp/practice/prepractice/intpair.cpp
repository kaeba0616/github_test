#include<bits/stdc++.h>
using namespace std;

class Intpair{
  public:
    Intpair(int firstValue, int secondValue);
    const Intpair operator++(); //prefix version
    const Intpair operator++(int); //postfix version
    void setFirst(int newValue);
    void setSecond(int newValue);
    int getFirst() const;
    int getSecond() const;
  private:
    int first;
    int second;
};

int main(){

  Intpair a(1,2);
  cout<<a.getFirst()<<" "<<a.getSecond()<<"\n";
  
  cout<< "Postfix a++: Start value of object a: ";
  cout<< a.getFirst()<<" "<<a.getSecond()<<"\n";
  Intpair b = a++;
  cout<< "Value returned: ";
  cout<< b.getFirst()<<" "<<b.getSecond()<<"\n";

  a= Intpair(1,2);
  cout<< "prefix ++a: Start value of object a: ";
  cout<< a.getFirst()<<" "<<a.getSecond()<<"\n";
  Intpair c =++a;
  cout<<"Changed object: ";
  cout<< c.getFirst()<<" "<<c.getSecond()<<"\n";
  return 0;
}

Intpair::Intpair(int firstValue, int  secondValue)
  :first(firstValue), second(secondValue){}
const Intpair Intpair::operator++(int ignoreMe){
  int temp1 = first;
  int temp2 = second;
  first++;
  second++;
  return Intpair(temp1, temp2);
}

const Intpair Intpair::operator++(){
  first++;
  second++;
  return Intpair(first, second);
}
void Intpair::setFirst(int newValue){
  first = newValue;
}

void Intpair::setSecond(int newValue){
  second = newValue;
}

int Intpair::getFirst() const{
  return first;
}

int Intpair::getSecond() const{
  return second;
}


