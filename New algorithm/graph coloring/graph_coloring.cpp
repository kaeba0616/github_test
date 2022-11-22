#include<bits/stdc++.h>
using namespace std;

int vcolor[110];
int m;
int n =5;
int result=0;

bool promising(int i, bool W[][5]){
  int j=0;

  while(j<i){
    if(W[i][j] && vcolor[i] == vcolor[j])
      return false;
    J++
  }
  return true;
}

void m_coloring (int i, bool W[][5]){
  if(i ==n )  result++;
  else{
    for(int color=1; color<=m; color++){
      vcolor[i] = color;

      if(promising(i,W))
        m_coloring(i-1, W);
    }
  }
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  bool W[5][5] = {{0,1,1,1,0},
                  {1,0,1,0,1},
                  {1,1,0,1,1},
                  {1,0,1,0,1},
                  {0,1,1,1,0}};
  cout <<"비 방향 그래프" <<"\n";
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout << W[i][j] <<" ";
    }
    cout<<"\n";
  }

  cout << "\n" <<"color : ";
  cin>>m;

  m_coloring(0, W);

  cout <<"\n" <<"칠할 수 있는 방법 : "<<result;
  return 0; 
}