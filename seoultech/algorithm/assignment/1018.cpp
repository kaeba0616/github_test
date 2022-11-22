#include <bits/stdc++.h>
using namespace std;

const int vMAX = 200;

set<int> F, U, C;
vector<int> S[vMAX + 5];

int n, e;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> e;
  for (int i = 1; i <= n; i++) S[i].push_back(i);
  for (int i = 0; i < e; i++) {
    int a, b;
    cin >> a >> b;
    S[a].push_back(b);
    S[b].push_back(a);
  }
  for (int i = 1; i <= n; i++) U.insert(i), F.insert(i);
  while (!U.empty()) {
    int mxCnt = 0, sIdx = 0;
    for (int idx : F) {
      int cnt = 0;
      for (int v : S[idx])
        if (U.find(v) != U.end()) cnt++;
      if (mxCnt < cnt) {
        mxCnt = cnt;
        sIdx = idx;
      }
    }
    for (int v : S[sIdx])
      if (U.find(v) != U.end()) U.erase(v);
    F.erase(sIdx), C.insert(sIdx);
  }
  for (int s : C) cout << s << ' ';
}