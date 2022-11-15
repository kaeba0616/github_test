#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin>>n;
  stack <int> s;
  while(n--){
    string c;
    cin>>c;
    if(c == "push"){
      int x;
      cin>>x;
      s.push(x);
    }
    else if(c =="pop"){
      if(s.empty()) cout<<-1<<'\n';
      else{ 
        cout<<s.top()<<'\n';
        s.pop();
      }
    }
    else if(c == "size"){
      cout<<s.size()<<'\n';
    }
    else if(c == "empty"){
      cout<<(int)s.empty()<<'\n';
    }
    else if(c == "top"){
      if(s.empty()) cout<<-1<<'\n';
      else cout<<s.top()<<'\n';
    }
  }
}