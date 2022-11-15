#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int arr[MAX];


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int N;
  cin>>N;
  for(int i = 0; i < N; i++)
    cin>>arr[i];
  sort(arr, arr+N);
  for(int i = 0; i < N; i++)
    cout<<arr[i]<<"\n";

}