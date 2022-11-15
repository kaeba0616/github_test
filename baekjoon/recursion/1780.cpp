#include<bits/stdc++.h>
using namespace std;

const int MAX = pow(3,7);

int N;
int paper[MAX][MAX];
int cnt[3];

bool check(int x, int y, int n){
  for(int i=x; i<x+n; i++)
  for(int j=y; j<y+n; j++)
    if(paper[x][y] != paper[i][j])
    return false;
  return true;
}

void solve(int x, int y, int n){
  if(check(x,y,n)){
    cnt[paper[x][y]+1] +=1;
    return;
  }
  int n2 =n/3;
  for(int i=0; i<3; i++)
  for(int j=0; j<3; j++)
    solve(x+i*n2, x+j*n2, n2);
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin>>N;
  for(int i=0; i<N; i++)
  for(int j=0; j<N; j++)
    cin >>paper[i][j];
  solve(0,0,N);
  for( int i =0; i<3; i++) cout<< cnt[i] <<"\n";
}