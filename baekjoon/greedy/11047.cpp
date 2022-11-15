#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, k, ans = 0;
  cin >> n >> k;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n, greater<>());

  for (int i = 0; i < n; i++) {
    ans+=k/arr[i];
    k= k%arr[i];
  }
  cout<<ans;
}