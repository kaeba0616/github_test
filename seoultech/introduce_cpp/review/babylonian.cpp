#include<bits/stdc++.h>
using namespace std;

int main(){
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(2);
  
  double n;
  double lastguess, currentguess;
  cout<<"Enter a number: "<<"\n";
  cin>>n;
  lastguess = n/2;
  bool done = true;
  do{
    double r =n/lastguess;
    currentguess = (lastguess+r)/2;
    double diff =lastguess - currentguess;
    if(diff<0) diff = diff*-1;
    double percentdiff = diff/lastguess;
    lastguess = currentguess;
    cout<<"loop" <<"\n";
    if(percentdiff <0.01) done =false;
  }while(done);
  cout<<"The square root of "<<n<<" is approximately "<<currentguess;
}