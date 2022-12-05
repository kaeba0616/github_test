#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n;
pair<int, int> v[10'000'003]; // 작업의 개수만큼 크기 배정

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) cin >> v[i].second>> v[i].first;
  sort(v, v + n); // index로 이용하기 위해 빠르게 끝나는 순으로 정렬, 시간이 같으면 시작하는 시간이 빠른 순으로 정렬

  int ans = 0;
  int t = 0;
  for (int i = 0; i < n; i++) {
    if (t > v[i].second) continue; // 시작하는 시간이 이전 작업의 끝나는 시간 이전에 있으면 넘기기
    // 이후에 있으면
    ans++;   // 작업 개수 하나 추가
    t = v[i].first;  // 추가된 작업의 끝나는 시간을 t로 잡아서 다음 작업과 비교할 수 있게 변경
  }
  cout << ans;
}
