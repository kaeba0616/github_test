#include<iostream>
using namespace std;

class Temperature{
  public : 
    void  setTempKelvin(double temp);
    void  setTempFahrenheit(double temp);
    void  setTempCelsius(double temp);
    double  getTempKelvin();
    double  getTempFahrenheit();
    double  getTempCelsius();
    void  output();
  private :
    double Kelvin;
};

void Temperature::setTempKelvin(double temp)
{
  Kelvin = temp;
}

void Temperature::setTempFahrenheit(double temp)
{
  Kelvin = (5.0/9.0)*(temp -32) + 273.15;
}

void Temperature::setTempCelsius(double temp)
{
  Kelvin = temp+273.15;
}

double Temperature::getTempKelvin(){
  return Kelvin;
}

double Temperature::getTempFahrenheit(){
  return (Kelvin-273.15)*(9.0/5.0)+32;
}

double Temperature::getTempCelsius(){
  return Kelvin-273.15;
}

void Temperature::output(){
  cout<<"In Celsius: "<<getTempCelsius()<<"\n";
  cout<<"In Fahrenheit: "<<getTempFahrenheit()<<"\n";
  cout<<"In Kelvin: "<<getTempKelvin()<<"\n\n";  
}
int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  Temperature temp1, temp2, temp3;
  temp1.setTempFahrenheit(32);
  temp2.setTempCelsius(100);
  temp3.setTempKelvin(0);

  temp1.output();
  temp2.output();
  temp3.output();
  
  return 0;
}
