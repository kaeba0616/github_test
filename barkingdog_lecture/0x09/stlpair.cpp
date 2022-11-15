#include<bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  pair<int, int> t1 = make_pair(10,13);
  pair<int ,int> t2 = {4,6};
  cout<<t2.first<<' '<<t2.second<<"\n";
  if(t2<t1) cout<< "t2<t1"; //앞쪽먼저 뒤쪽나중에 비교함
}