#include<bits/stdc++.h>
using namespace std;

const int MAX = 64;

int arr[MAX][MAX];
int n;

bool nondiff_chk (int x, int y, int n){
  for(int i=x; i<x+n; i++)
    for(int j=y; j<y+n; j++){
      if(arr[x][y] != arr[i][j]) return false;
    }
    return true;
}

void quardTree(int x, int y, int n){
  if(n == 1){ 
    cout<<arr[x][y];
    return;
  }
  int n2 = n/2;
  if(!nondiff_chk(x,y,n)){
    cout<<"(";
    quardTree(x,y,n2);
    quardTree(x,y+n2,n2);
    quardTree(x+n2,y,n2);
    quardTree(x+n2,y+n2,n2);
    cout<<")";
  }
  //   else{
  //   cout<<"("<<arr[x][y]<<")";
  // }
  return;
}
int main(){
  cin>>n;
    for(int i=0; i<n; i++){
      string str;
      cin>>str;
      for(int j=0; j<n; j++) arr[i][j] = str[j]-'0';
    }
  quardTree(0,0,n);
}