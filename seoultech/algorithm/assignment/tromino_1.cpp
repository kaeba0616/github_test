#include<bits/stdc++.h>
using namespace std;

int arr[17][17];
int num=0;

bool check(int n, int x, int y){
  for(int i =x; i<x+n; i++)
    for(int j=y; j<y+n; j++){
      if(0 != arr[i][j]) return false; 
    }
    return true;
}

void tromino(int n, int x, int y){
  if(n==1)return;
  num++;
  int n2= n/2;
  if(check(n2, x, y)) arr[x+n2-1][y+n2-1] = num;
  if(check(n2, x, y+n2)) arr[x+n2-1][y+n2] = num;
  if(check(n2, x+n2 , y+n2))arr[x+n2][y+n2]=num;
  if(check(n2, x+n2, y)) arr[x+n2][y+n2-1] = num;

  tromino(n2, x, y);
  tromino(n2, x+n2, y);
  tromino(n2, x, y+n2);
  tromino(n2, x+n2, y+n2);
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,x,y;
  cin>>n>>x>>y;
  int sz = 1<<n;
  arr[y-1][x-1] = -1;
  tromino(sz, 0,0);

  for(int i=0; i<sz; i++){
  for(int j=0; j<sz; j++){
    cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }
}