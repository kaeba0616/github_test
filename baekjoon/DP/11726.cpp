#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int N[MAX];

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin>>n;
  N[1]=1;
  N[2] =2;
  for(int i=3; i<= n; i++){
    N[i] = (N[i-1]+ N[i-2])%10007;
  } 
  cout<<N[n];
}