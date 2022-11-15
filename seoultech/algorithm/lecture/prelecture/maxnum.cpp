#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int card[MAX+5];

int MAXcard(int n){
  int st_max = 0;
  for(int i=0; i<n; i++){
    if(st_max<card[i]) st_max = card[i];
  }
  return st_max;
}

int n;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin>>n;
  for(int i=0; i<n; i++){
    cin>>card[i];
  }
  cout<<MAXcard(n)<<"이다.";

}