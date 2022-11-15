#include<bits/stdc++.h>
using namespace std;

int coin[11];
int C[100000];
int coinNum;
const int INF = 999999;

int DPCoinChange(int M){
  for (int i=1; i<=M; i++){
    C[i] = INF;
  }
  C[0] =0;
  for(int i=1; i<=M; i++){
    for(int j=1; j<=coinNum; j++){
      if(coin[j] <= i && C[i-coin[j]]+1<C[i])
        C[i] = C[i-coin[j]]+1;
    }
  }
  return C[M];
}

void split(string s) {
  s += ',';
  string a;
  for (auto c : s) {
    if (c == ',')  coin[++coinNum] = stoi(a);
    else if (c ==' ') a = "";
    else a.push_back(c);
  }
}
int M;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;
  getline(cin, s);
  cin >> M;
  split(s);
  int ans = DPCoinChange(M);
  cout<< ans;

}
