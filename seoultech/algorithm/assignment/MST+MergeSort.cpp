#include <bits/stdc++.h>
using namespace std;

const int vMAX = 200;
vector<int> p(vMAX + 5,-1);

int find(int x) {
  if (p[x] < 0) return x;
  return p[x] = find(p[x]);
}

bool is_diff_group(int u, int v) {
  u = find(u); v = find(v);
  if (u == v) return 0;
  if (p[u] == p[v]) p[u]--;
  if (p[u] < p[v]) p[v] = u;
  else p[u] = v;
  return 1;
}

int n, m, ans;
const int eMAX = 20;
tuple<int, int, int> edge[eMAX + 5];
tuple<int, int, int> tmp[eMAX + 5];

void merge(int st, int en) {
  int mid = (st + en) /2;
  for (int i = st, idx1 = st, idx2 = mid; i < en; i++){
    if (idx1 == mid) tmp[i] = edge[idx2++];
    else if (idx2 == en) tmp[i] = edge[idx1++];
    else tmp[i] = edge[idx1] <= edge[idx2] ? edge[idx1++] : edge[idx2++];
  }
  for (int i = st; i < en; i++) edge[i] = tmp[i];
}

void merge_sort(int st, int en) {
  if (en == st + 1) return;
  int mid = (st + en) / 2;
  merge_sort(st , mid);
  merge_sort(mid, en);
  merge(st, en);
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int a, b, cost;
    cin >> a >> b >> cost;
    edge[i] = tie(cost, a, b);
  }
  merge_sort(0, m);
  for (auto [cost, a, b] : edge) {
    if (!is_diff_group(a, b)) continue;
    ans += cost;
  }
  cout << ans;
}
