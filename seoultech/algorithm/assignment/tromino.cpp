#include <iostream>
using namespace std;

int arr[256][256];
int num, sz;
void print()
{
  for (int i = 0; i < sz; i++)
  {
    for (int j = 0; j < sz; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}
bool IsThereBlank(int n, int x, int y)
{
  for (int i = x; i < x + n; i++)
  {
    for (int j = y; j < y + n; j++)
    {
      if (arr[i][j] != 0)
        return true;
    }
  }
  return false;
}

void Tromino(int n, int x, int y)
{

  if (n == 1)
    return;

  num++;

  int next_n = n / 2;
  int x1 = x, y1 = y;
  int x2 = x + next_n, y2 = y;
  int x3 = x, y3 = y + next_n;
  int x4 = x + next_n, y4 = y + next_n;

  if (!IsThereBlank(next_n, x1, y1))
    arr[x1 + next_n - 1][y1 + next_n - 1] = num;
  if (!IsThereBlank(next_n, x2, y2))
    arr[x2][y2 + next_n - 1] = num;
  if (!IsThereBlank(next_n, x3, y3))
    arr[x3 + next_n - 1][y3] = num;
  if (!IsThereBlank(next_n, x4, y4))
    arr[x4][y4] = num;
 // print();
  
  Tromino(next_n, x1, y1);
  Tromino(next_n, x2, y2);
  Tromino(next_n, x3, y3);
  Tromino(next_n, x4, y4);
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, x, y;
  cin >> n;
  cin >> x >> y;
  sz = 1 << n;
  arr[sz-y][x - 1] = -1;

  Tromino(sz, 0, 0);
  print();
}