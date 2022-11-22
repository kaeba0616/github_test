#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

vector<pair<int, int>> p;
int INF = 0x3f3f3f3f; 

int D[10003]; //거리 배열 정의 
int C[13];  //cluster 정의

int n, k;

int dis(int a, int b) { //거리를 구하기 위한 함수 정의
  int xvalue = (p[a].X - p[b].X) * (p[a].X - p[b].X);
  int yvalue = (p[a].Y - p[b].Y) * (p[a].Y - p[b].Y);

  return xvalue + yvalue;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> k;
  fill(D, D + n, INF); // 최소 거리를 구하기 위해서 INF로 배열 대입
  for (int i = 0; i < n; i++) { // 점들의 좌표값 입력
    int a, b;
    cin >> a >> b;
    p.push_back({a, b});  
  }

  C[1] = 0; //  첫번째 cluster 정의

  for (int j = 2; j < k + 1; j++) {
    for (int i = 0; i < n; i++) {
      for (int cnum : C) { // 모든 cluster 의 값을 좌표배열의 index로 취급 
        D[cnum] = 0; // cluster 자신의 거리는 0으로 정의
        if (i != cnum) {  //  cluster가 아닌 좌표면
          if (D[i] >= dis(i, cnum)) D[i] =  dis(i, cnum); //  최소 거리 정의
        }
      }
    }
    int max = max_element(D, D + n) - D; //  모든 cluster와의 최소 거리 중 최대 거리를 가진 좌표 index 구하기
    C[j] = max; //  cluster안에 추가
    fill(D, D + n, INF);  //  다시 최소 거리를 구하기 위해서 INF로 정의
  }
  sort(C+1, C+k+1); // index 내림차순으로 배열 정렬
  for (int i = 1; i <= k; i++) { // cluster의 좌표값 출력
    cout << p[C[i]].X << " " << p[C[i]].Y << "\n";
  }
}
