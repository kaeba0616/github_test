#include <bits/stdc++.h>
using namespace std;

int Num1[43];
int Num0[43];

void fibonacci(int n) {
  Num1[1] = 1;
  Num0[0] = 1;
  for (int i = 2; i <= n; i++) {
    if(Num1[i] >0 && Num0[i] >0 ) continue;
    Num1[i] = Num1[i - 1] + Num1[i - 2];
    Num0[i] = Num0[i - 1] + Num0[i - 2];
  }
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;
    fibonacci(num);
    cout << Num0[num] << " " << Num1[num] << "\n";
  }
}