#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  string str;
  cin>>str;
  int num =0;
  int ans=0;
  bool chk= false;
  int sz = str.length();

  for(int i=0; i<=sz; i++){
    if(str[i] == '-' || str[i] == '+' || i == sz){
      if(chk){
        ans -= num;
        num=0;
      }
      else{
        ans += num;
        num=0;
      }
      if(str[i] =='-') chk = true;
    }
    else{
      num *=10;
      num += str[i] -'0';
    }
  }
  cout<<ans;
}