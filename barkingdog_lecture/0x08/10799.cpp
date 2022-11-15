#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string str;
  cin>>str;
  stack<char> s;
  int ans = 0;
  int sz = str.size();
  for(int i=0; i < sz; i++){
    if(str[i] == '('){
      s.push(str[i]);
    }
    else if(str[i] == ')'){
      if(s.empty()) return 0;
      if(str[i-1] == '('){
        s.pop();
        ans +=s.size();
      }
      else{
        s.pop();
        ans++;
      }
    }
    else return 0;
  }
  cout<<ans;
}