#include<bits/stdc++.h>
using namespace std;

int f(int n){
  int i, f[n];
  f[0]=0; f[1] =1;
  for(i=2; i<=n; i++)
    f[i]= f[i-1] +f[i-2];
  return f[n];
}

int main(){

}