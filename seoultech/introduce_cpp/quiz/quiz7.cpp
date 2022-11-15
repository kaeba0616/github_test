#include<bits/stdc++.h>
using namespace std;

int main(){
  int y,x=1, total=0;
  
  while(x<=5){ 
  y = x*x;
  cout<<y<<"\n";
  total +=y;
  ++x;
  }
  cout<<"Total is "<<total<<"\n";
  return 0;
}
