#include<iostream>
using namespace std;

const int MAX = 128;
int arr[MAX][MAX];
int cnt[2];

bool check(int x, int y, int n){
  for(int i=x; i<x+n; i++){
  for(int j=y; j<y+n; j++)
    if(arr[x][y] != arr[i][j]) return false;
  }
  return true;
}

void paper(int x, int y, int n){
  if(check(x, y ,n)){
    cnt[arr[x][y]]++;
    return;
  } 
  int n2 = n/2;
  for(int i=0; i<2; i++)
    for(int j=0; j<2; j++) paper(x+i*n2,y+j*n2, n2);
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin>>N;
  for(int i=0; i<N; i++)
    for(int j=0; j<N; j++)  cin >> arr[i][j];  
  paper(0,0,N);
  for(int i=0; i<2; i++)  cout<<cnt[i]<<"\n";
}