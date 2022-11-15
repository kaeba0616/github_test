#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin>>n;
  queue<int> q;
  while(n--){
    string c;
    cin>>c;
    if(c =="push"){
      int val;
      cin>>val;
      q.push(val);
    }
    else if(c=="pop"){
      if(q.empty()) cout<<-1<<"\n";
      else {
      cout<<q.front()<<"\n";
      q.pop();
      }
    }
    else if(c=="size"){
      cout<<q.size()<<"\n";
    }
    else if(c=="empty"){
      cout<<q.empty()<<"\n";
    }
    else if(c=="front"){
      if(q.empty()) cout<<-1<<"\n";
      else cout<<q.front()<<"\n";
    }
    else if(c=="back"){
      if(q.empty()) cout<<-1<<"\n";
      else cout<<q.back()<<"\n";
    }
  }
}