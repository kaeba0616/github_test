#include<bits/stdc++.h>
using namespace std;

const int MAX = 1000;
int arr[MAX+5];
int tmp[MAX+5];

void merge(int p ,int q){
  int mid = (p+q)/2;
  int lidx = p;
  int ridx = mid;
  for(int i= p; i<q; i++){
    if(lidx ==mid) tmp[i] =arr[ridx++];
    else if(ridx == q) tmp[i]=arr[lidx++];
    else if(arr[lidx]<arr[ridx]) tmp[i] = arr[lidx++];
    else tmp[i] = arr[ridx++];
  }
  for(int i=p; i<q; i++){
    arr[i] = tmp[i];
  }
}

void mergesort(int p, int q){
  if(p+1 == q) return;
    int mid = (p+q)/2;
    mergesort(p, mid);
    mergesort(mid, q);
    merge(p,q);
}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin>>n;

  for(int i= 0; i<n; i++){
    cin>>arr[i];
  }
  mergesort(0,n);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<"\n";
  }
}