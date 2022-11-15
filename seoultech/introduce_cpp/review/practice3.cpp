#include<iostream>
using namespace std;

int main(){

  cout<<fixed;
  cout.precision(4); 
  double height, weight, age;
  double hatsize, jacketSize, waist;
  bool chk =false;
  char key;
  do{
  cout<<"Give me your height in inches, weight in pounds, and age in years\n"
    <<"and I will give you your hat size, jacket size(inches at chest)\n"
    <<"and your waist size in inches.\n";
  cin>> height >> weight >> age;
  hatsize=2.9*weight/height;
  jacketSize = height*weight/288 + 1/8*(age-30)/10;
  waist = weight/5.7 +1/10*(age-28)/2;
  cout<<"hat size = "<<hatsize<<"\n";
  cout<<"jacket size = "<<jacketSize<<"\n";
  cout<<"waist size = "<<waist<<"\n\n";
  cout<<"enter Y or y to repeat, any other character ends.\n";
  cin>>key;
  if(key == 'Y' || key=='y') chk = true;
  }while(chk);
}