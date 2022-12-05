#include<iostream>
using namespace std;

class Box{
  public:
    double getVolumn(void){
      return length * breadth * height;
    }

    void setLength(double len){
      length = len;
    }

    void setBreadth(double bre){
      breadth = bre;
    }

    void setHeight(double hei){
      height = hei;
    }

    //Overload + operator to add two Box objects.
    Box operator+(const Box& b){
      Box box;

      box.length = this->length + b.length;
      box.breadth = this->breadth + b.breadth;
      box.height = this->height + b.height;

      return box;
    }

    private:
      double length;
      double breadth;
      double height;
};

int main(){
  Box Box1;
  Box Box2;
  Box Box3;
  double volumn = 0.0;

  Box1.setLength(6.0);
  Box1.setBreadth(7.0);
  Box1.setHeight(5.0);
  
  Box2.setLength(12.0);
  Box2.setBreadth(13.0);
  Box2.setHeight(10.0);
  
  volumn = Box1.getVolumn();
  cout <<"Volume of Box1 : " << volumn <<"\n";

  volumn = Box2.getVolumn();
  cout <<"Volumn of Box2 : " << volumn <<"\n";

  volumn = Box3.getVolumn();
  cout << "Volumn of Box3 : " << volumn <<"\n";
  
  return 0;
}