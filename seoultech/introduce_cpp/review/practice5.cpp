#include<iostream>
using namespace std;

class Temperature{
  public:

    void setTempKelvin (double temp);
    void setTempFahrenheit(double temp);
    void setTempCelsius(double temp);
    double getTempKelvin ();
    double getTempFahrenheit();
    double getTempCelsius();
    void output();

  private:
    double Kelvin;
};

int main(){
  Temperature tmp;
  tmp.setTempFahrenheit(32);
  tmp.output();
  
  tmp.setTempCelsius(100);
  tmp.output();
  
  tmp.setTempKelvin(0);
  tmp.output();

  char key;
  cout<<"Enter a character to exit.\n";
  cin>>key;
  if(key == 'a') return 0;  
}

void Temperature::setTempCelsius(double temp){
  Kelvin =temp +273.15;
}

void Temperature::setTempFahrenheit(double temp){
  double celsius = (5/9)*(temp-32);
  Kelvin = celsius +273.15;
}

void Temperature::setTempKelvin(double temp){
  Kelvin =temp;
}

double Temperature::getTempCelsius(){
  return (Kelvin-273.15);
}

double Temperature::getTempFahrenheit(){
  return ((9.0/5)*(Kelvin-273.15)+32);
}

double Temperature::getTempKelvin(){
  return Kelvin;
}

void Temperature::output(){
  cout<<"In Celsius: "<<getTempCelsius()<<"\n";
  cout<<"In Fahrenheit: "<<getTempFahrenheit()<<"\n";
  cout<<"In Kelvin: "<<getTempKelvin()<<"\n\n";
}
