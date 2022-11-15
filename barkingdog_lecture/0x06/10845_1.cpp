#include<bits/stdc++.h>
using namespace std;

const int MX =100005;
int dat[MX];
int head, tail;

void push(int x){
  dat[tail++] =x;
}

void pop(){
  head++;
}

int front(){
  return dat[head];
}

int back(){
  return dat[tail-1];
}

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
      push(val);
    }
    else if(c=="pop"){
      if(head == tail) cout<<-1<<"\n";
      else {
      cout<<front()<<"\n";
      pop();
      }
    }
    else if(c=="size"){
      cout<<tail- head<<"\n";
    }
    else if(c=="empty"){
      cout<<(head == tail)<<"\n";
    }
    else if(c=="front"){
      if(head == tail) cout<<-1<<"\n";
      else cout<<front()<<"\n";
    }
    else if(c=="back"){
      if(head== tail) cout<<-1<<"\n";
      else cout<<back()<<"\n";
    }
  }
}