//O(n^2)
#include<bits/stdc++.h>
using namespace std;

int arr[103];
int n;

void bubblesort(int n){
  for(int i=1; i<n; i++){
    for(int j=1; j<n-i+1; j++){
      if(arr[j-1] > a[j]){
        swap(arr[j-1] , a[j]);
      }
    }
  }
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin>>n;
  for(int i=0; i<n; i++)  cin >> arr[i];
  bubblesort(n);
  for(int i=0; i<n; i++)  cout<< arr[i];
}