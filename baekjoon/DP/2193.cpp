#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll p[95][2];

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;
  p[1][1] =1LL;
  p[2][0] =1LL;
  for(int i=3; i<=n; i++){
    p[i][1] = p[i-1][0];
    p[i][0] = p[i-1][0]+p[i-1][1];
  }
  cout<<p[n][0]+p[n][1];
    
}