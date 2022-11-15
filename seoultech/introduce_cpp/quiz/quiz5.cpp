#include<bits/stdc++.h>
using namespace std;

int main(){
  int val;
  cin>>val;

  if(val>1)
    val = val+5;
  else if(val>4)
    val = val+10;
  else 
    val = val+20;

  cout<<val<<"\n";
}