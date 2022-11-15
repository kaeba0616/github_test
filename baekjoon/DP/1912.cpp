#include<bits/stdc++.h>
using namespace std;

const int MAX =100'000;
int N[MAX+3];
int A[MAX+3];
int n;

int main(){
  cin>>n;
  for(int i=1; i<=n; i++){
    cin >> A[i];   
    N[i] =A[i];
  }
  for(int i=1; i<=n; i++) 
    N[i]  = max(N[i], N[i-1] +A[i]);
  cout<< *max_element(N+1, N+n+1);
}