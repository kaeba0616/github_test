#include<iostream>

using namespace std;

double ConvertToMPH(int minPace, int secPace);
double ConvertToMPH(int kph);

int main(){
  cout<<"5:30 pace is " <<ConvertToMPH(5,30)<<" MPH.\n";
  cout<<"7:30 pace is " <<ConvertToMPH(7,30)<<" MPH.\n";
  cout<<"8:00 pace is " <<ConvertToMPH(8,0)<<" MPH.\n";
  cout<<"10 kph is "<<ConvertToMPH(10)<<" MPH.\n";  
  cout<<"20 kph is "<<ConvertToMPH(20)<<" MPH.\n";  
  cout<<"120 kph is "<<ConvertToMPH(120)<<" MPH.\n";  
}

double ConvertToMPH(int minPace, int secPace){
  return 3600.0/(60*minPace + secPace);   
}

double ConvertToMPH(int kph){
  return kph/1.61;
}