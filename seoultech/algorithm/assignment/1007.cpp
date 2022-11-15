#include <bits/stdc++.h>
using namespace std;

#define W first
#define N second

int INF = 0x3f3f3f3f;
const int MAX = 20000;
vector<pair<int, int>> adj[MAX + 5];
int dist[MAX + 5];
bool chk[MAX + 5];
int ans;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, M;
  cin >> n >> M;
  for (int i = 0; i < M; i++) {
    int st, en, w;
    cin >> st >> en >> w;
    adj[st].push_back({w, en});
    adj[en].push_back({w, st});
  }
  fill(dist + 1, dist + 1 + n, INF);
  for (auto nxt : adj[1]) dist[nxt.N] = nxt.W;
  dist[1] = 0;
  chk[1] = true;
  int num = n - 1;
  while (num--) {
    int mnCost = INF;
    int mnNext = 1;
    for (int i = 1; i <= n; i++) {
      if (chk[i]) continue;
      if (mnCost > dist[i]) {
        mnCost = dist[i];
        mnNext = i;
      }
    }
    chk[mnNext] = true;
    ans += mnCost;

    for (auto nxt : adj[mnNext]) {
      if (chk[nxt.N]) continue;
      dist[nxt.N] = min(dist[nxt.N], nxt.W);
    }
  }
  cout << ans;
}