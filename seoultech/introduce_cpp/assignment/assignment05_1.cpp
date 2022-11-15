#include<iostream>
using namespace std;

struct WeatherData{
  int temperature;
  int windChill;
  int windSpeed;
};


int main(){
  WeatherData prediction = {};
  cout<< prediction.temperature<<"\n";
  cout<< prediction.windChill<<'\n';
  cout<< prediction.windSpeed<<'\n';
  
  prediction = {40};
  cout<< prediction.temperature<<"\n";
  cout<< prediction.windChill<<'\n';
  cout<< prediction.windSpeed<<'\n';

  prediction = {40, -10};
  cout<< prediction.temperature<<"\n";
  cout<< prediction.windChill<<'\n';
  cout<< prediction.windSpeed<<'\n';
  
  prediction = {40, -10, 20};
  cout<< prediction.temperature<<"\n";
  cout<< prediction.windChill<<'\n';
  cout<< prediction.windSpeed<<'\n';

}