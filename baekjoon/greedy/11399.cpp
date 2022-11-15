#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int arr[MAX + 5];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr+n);
  int sum=0;
  for(int i=0; i<n; i++){
    sum += arr[i]*(n-i);
  }
  cout<<sum;
}
