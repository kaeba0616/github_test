#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int board[502][502];
bool vis[502][502];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++) cin >> board[i][j];
  queue<pair<int, int>> q;
  vis[0][0] = 1;
  q.push({0, 0});
  while (!q.empty()) {
    pair<int, int> cur = q.front();
    q.pop();
    cout << '(' << cur.X << "," << cur.Y << ") ->";
    for (int dir = 0; dir < 4; dir++) {
      int nx = cur.X + dx[dir];
      int ny = cur.Y + dy[dir];
      if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
      if (vis[nx][ny] || board[nx][ny] != 1) continue;
      vis[nx][ny] = 1;
      q.push({nx, ny});
    }
  }
  // for(int i=0; i<n; i++)
  //   for(int j =0; j<m; i++){
  //     if(!vis[i][j]) {
  //       cout<<"failed...";
  //       return 0;
  //     }
  //   }
  // cout<< "success!!";
  // return 0;
}