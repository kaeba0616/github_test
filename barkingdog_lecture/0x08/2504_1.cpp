#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string a;
  getline(cin, a);
  stack<char> s;

  int sum = 0;
  int mux = 1;

  for (auto c : a) {
    if (c == '('){
      s.push(c);
      mux *=2;
    }
    else if (c == '['){
      s.push(c);
      mux *= 3;
    }
    else if(c== ')'){
      if(s.empty() || s.top() != '('){
        cout<<"0";
      }
      sum += mux;
      mux /= 2;
      s.pop();
    }
    else if(c == ']'){
      if(s.empty() || s.top() != '['){
        cout<<"0";
      }
      sum += mux;
      mux /= 3;
      s.pop();
    }
  }  
  cout<<sum;
}