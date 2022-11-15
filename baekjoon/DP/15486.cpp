#include<bits/stdc++.h>
using namespace std;

int n;
const int MAX = 1'500'000;
int t[MAX+5], p[MAX+5], d[MAX+5];


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin>>n;

  for(int i=1; i<=n; i++) cin>> t[i] >>p[i];
/*
  for(int i=n; i>=1; i--){
    //i번째 일에 상담을 할 수 있을 때
    if(i+t[i]-1<=n){
      //i번째 일에 상담을 했을 때와 상담을 하지 않았을 때 얻을 수 있는 수익 중 최대 수익을 취함
      d[i] = max(d[i + t[i]] +p[i] ,d[i+1]);
    }
    else d[i] = d[i+1];
  }
  cout<< *max_element(d+1, d+n+1);
*/
  for(int i=1; i<=n; ++i){
    d[i] = max(d[i], d[i-1]);
    if(i + t[i] -1 <= n)
      d[i +t[i]] = max(d[i+ t[i]], d[i] + p[i]);
  }
  cout<< max(d[n], d[n+1]);
}

