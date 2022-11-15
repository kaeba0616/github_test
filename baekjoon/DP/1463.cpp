#include <bits/stdc++.h>
using namespace std;

const int MAX = 1'000'000;
int N[MAX];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  N[1] = 0;
  for (int i = 2; i <= n; i++) {
    N[i] = N[i - 1] + 1;
    if (i % 2 == 0) N[i] = min(N[i], N[i / 2] + 1);
    if (i % 3 == 0) N[i] = min(N[i], N[i / 3] + 1);
  }
  cout << N[n];
}