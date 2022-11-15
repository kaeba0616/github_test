#include <bits/stdc++.h>
using namespace std;

char board[2300][2300];

void solve(int n, int x, int y)
{
  if (n == 1)
  {
    board[x][y] = '*';
    return;
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i == 1 && j == 1)
        continue;
      solve(n / 3, x + n / 3 * i, y + n / 3 * j);
    }
  }
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    fill(board[i], board[i] + n, ' ');

  solve(n, 0, 0);
  for (int i = 0; i < n; i++)
    cout << board[i] << '\n';
}

/*
#include <bits/stdc++.h>
using namespace std;

void print_star(int i, int j, int num) {
  if ((i / num) % 3 == 1 && (j / num) % 3 == 1)
    cout << ' ';
  else {
    if (num / 3 == 0)
      cout << '*';
    else
      print_star(i, j, num / 3);
  }
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int num;
  cin >> num;
  for (int i = 0; i < num; i++) {
    for (int j = 0; j < num; j++) print_star(i, j, num);
    cout << '\n';
  }
}
*/