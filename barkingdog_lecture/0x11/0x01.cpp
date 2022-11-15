#include<iostream>
using namespace std;

int n, x;
int a[15];

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int ans =0;
  cin>>n>>k;
  for(int i =0; i<n; i++) cin>>aa[i];
  for(int i= n-1; i>=0; i--){
    ans += k/a[i];
    k %=a[i];
  }
  cout<<ans;
}