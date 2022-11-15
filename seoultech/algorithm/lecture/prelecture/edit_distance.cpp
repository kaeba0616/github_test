#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int E[MAX][MAX];
int n, m, a;


int main() {
  string S, T;
  cin >> S >> T;
  int m = S.length();
  int n = T.length();

  for (int i = 0; i <m+1; i++) E[i][0] = i;
  for (int i = 0; i < n+1; i++) E[0][i] = i;
  for (int i = 1; i < m+1; i++) {
    for (int j = 1; j < n+1; j++) {
      if (S[i-1] == T[j-1]) a = 0;
      else a = 1;
      E[i][j] = min ( {E[i][j - 1] + 1, E[i - 1][j] + 1, E[i - 1][j - 1] + a });
    }
  }
  int f,s;
  cin>>f>>s;
  cout<<E[f][s];
}