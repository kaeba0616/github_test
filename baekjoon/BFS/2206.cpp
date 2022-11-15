//벽 부수고 이동하기

#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

char board[1003][1003];
int dist[1003][10003][2];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m;

bool OOB(int x, int y) { return x < 0 || x >= n || y < 0 || y >= m; }

int bfs() {
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; j++)
      dist[i][j][0] = dist[i][j][1] = -1;   // 거리 계산 편하게 -1로 입력
  dist[0][0][0] = dist[0][0][1] = 1;        // 처음 위치에서의 거리 1로 초기화
  queue<tuple<int, int, int>> q;            // x,y, 벽을 부셨는지에 대한 값 묶음
  q.push({0, 0, 0});                        // 초기 시작값 push
  while (!q.empty()) {
    int x, y, broken;
    tie(x, y, broken) = q.front();
    if (x == n - 1 & y == m - 1)
      return dist[x][y][broken];            // 0,0 부터 n-1,m-1까지 확인
    q.pop();
    int nextdist = dist[x][y][broken] + 1;  // 다음 갈 곳에 입력할 값 +1
    for (int dir = 0; dir < 4; ++dir) {
      int nx = x + dx[dir];
      int ny = y + dy[dir];
      if (OOB(nx, ny)) continue;
      if (board[nx][ny] == '0' && dist[nx][ny][broken] == -1) {     // 길인지 확인 + 안갔는지 확인
        dist[nx][ny][broken] = nextdist;
        q.push({nx, ny, broken});
      }
      //(nx, ny)를 부수는 경우
      if (!broken && board[nx][ny] == '1' && dist[nx][ny][1] == -1) { // 부셨는지 확인 + 벽인지 확인 + 안갔는지 확인
        dist[nx][ny][1] = nextdist; 
        q.push({nx, ny, 1});  
      }
    }
  }
  return -1;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j) cin >> board[i][j];

  cout << bfs();
  return 0;
}
