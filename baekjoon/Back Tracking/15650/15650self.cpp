//N 과 M (2)

#include<bits/stdc++.h>
using namespace std;

int n, m;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin>>n>>m;

  int arr[n];
  fill(arr, arr+n, 1);
  fill(arr, arr+m , 0);

  do{
    for(int i=0; i<n; i++)
      if(arr[i] == 0)
        cout<<i+1<<" ";
    cout<<"\n";  
  }while(next_permutation(arr,arr+n));
}