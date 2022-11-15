#include<bits/stdc++.h>
using namespace std;

const int vMAX = 1000;
vector <int> p(vMAX+5, -1);
tuple<int, int, int> edge[vMAX*vMAX/2+5];
int find(int x){
  if(p[x] <0) return x;
  return p[x] = find(p[x]);
}

bool diff(int u , int v){
  u = find(u); v= find(v);
  if(u == v) return 0;
  if(p[u] == p[v]) p[u]--;
  if(p[u] < p[v]) p[v] = u;
  else p[u] = v;
  return 1; 
}

int e;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin>>N;
  
  for(int i=1; i<=N; i++){
    for(int j=1; j<=N; j++){
      int cost;
      cin >> cost;
      if(i>=j) continue;
      edge[e++] = {cost, i, j};
    }
  }
  sort(edge, edge+e);
  long long ans = 0;
  int cnt =0;
  for(int i=0; i<e; i++){
    int a, b,cost;
    tie(cost,a,b) = edge[i];
    if(!diff(a,b)) continue;
    ans += cost;
    if(++cnt == N-1) break;
  }
  cout<<ans;
}