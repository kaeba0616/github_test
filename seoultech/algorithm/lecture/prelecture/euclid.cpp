#include<bits/stdc++.h>
using namespace std;

int Euclid(int a, int b){
  if(b==0) return a;
  return Euclid(b, a % b);
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a,b;
  cin>>a>>b;
  int c = Euclid(a,b);
  cout<<a<<"와 "<<b<<"의 최대공약수는 "<<c;
}