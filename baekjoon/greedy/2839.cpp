#include <bits/stdc++.h>
using namespace std;

int cnt;
int n;

int main() {
  cin >> n;
  while (n > 0) {
    if (n % 5 == 0) {
      cnt += n / 5;
      n=0;
      break;
    } else {
      n -= 3;
      cnt++;
    }
  }
  if (n != 0)
    cout << -1;
  else
    cout << cnt;
}