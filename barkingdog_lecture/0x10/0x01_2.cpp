//BOJ 9095 : 1,2,3 더하기

#include<bits/stdc++.h>
using namespace std;

int d[1000005];
int n;


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  d[1] =1, d[2] = 2; d[3] =4;  
  for(int i=2; i<=n; i++)
    d[i] = d[i-1]+d[i-2]+d[i-3];  
  int t =n;
  cin>>t;
  while(t--){
  int num;
  cin>>num;  
  cout<<d[num]<<'\n';
  }
}