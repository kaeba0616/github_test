#include<bits/stdc++.h>
using namespace std;

class test{
  int code;
  static int count;

  public:
    void setcode(void){
      code = ++count;
    }
    void showcode(void){
      cout<<"object member:" <<code<<"\n";
    }
    static void showcount(void){
      cout<<"count="<<count<<"\n";
    }
};

int test::count =0;

int main(){
  test t1, t2;
  t1.setcode();
  t2.setcode();
  test::showcount();

  test t3;
  t3.setcode();

  test::showcount();
  t1.showcode();
  t2.showcode();
  t3.showcode();
    
  return 0;
}





//count= 2
//count =3
//object member: 1
//object member: 2
//object member: 3

