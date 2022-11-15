#include <bits/stdc++.h>
using namespace std;

vector<int> p(303,-1);
tuple<int,int,int> edge[15];
tuple<int,int,int> tmp[15];

void merge(int st, int en){
  int mid = (st+en)/2;
  int lidx = st;
  int ridx = mid;
  for(int i= st; i<en; i++){  
    if(lidx == mid) tmp[i] = edge[ridx++];
    else if(ridx == en) tmp[i] = edge[lidx++];
    else tmp[i] = edge[lidx] <= edge[ridx] ? edge[lidx++] : edge[ridx++];
  }
  for(int i=st; i<en; i++) edge[i] = tmp[i];
}

void merge_sort(int st, int en){
  if(en == st+1) return;
  int mid = (st+en)/2;
  merge_sort(st, mid);
  merge_sort(mid, en);
  merge(st, en);
}


int find(int x){
  if(p[x] < 0) return x;
  return p[x] = find(p[x]);
}

bool is_diff_group(int u, int v){
  u = find(u); v = find(v);
  if(u == v) return 0;
  if(p[u] == p[v]) p[u]--;
  if(p[u] < p[v]) p[v] = u;
  else p[u] = v;
  return 1;
}

int v, e;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> v;
  for(int i = 1; i <= v; i++){
    int cost;
    cin >> cost;
    edge[e++] = {cost, i, v+1};
  }

 for(int i = 1; i <= v; i++){
    for(int j = 1; j <= v; j++){
      int cost;
      cin >> cost;
      if(i>=j) continue;
      edge[e++] = {cost, i, j};
    }
  }
  v++;
  merge_sort(0,e);
  int cnt = 0;
  int ans = 0;
  for(int i = 0; i < e; i++){
    int a, b, cost;
    tie(cost, a, b) = edge[i];
    if(!is_diff_group(a, b)) continue;
    ans += cost;
    cnt++;
    if(cnt == v-1) break;    
  }
  cout << ans;
}