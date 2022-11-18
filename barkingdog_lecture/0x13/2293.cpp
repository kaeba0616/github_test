//세수의 합

//O(N^4)i,j,k,l에 대한 4중 for문
//O(N^3lgN)i,j,k 3중 for문 , a[i],a[j],a[k] 가 배열 a에 있는 지 이분탐색
//two[m](O(N^2)) +a[k] = a[l]을 만족하는 a[l] 중에서 최댓값
//O(N^2lgN) K,l 2중 for문 ,a[l] - a[k]가 배열 two에 있는지 이분탐색(lg(N^2) = 2lgN)

#include<bits/stdc++.h>
using namespace std;

int n;
int a[1005];
vector<int> two;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i=0; i<n; i++) cin >>a[i];
  sort(a, a+n);
  for(int i=0; i<n; i++){
    for(int j =i; j<n; j++)
      two.push_back(a[i]+ a[j]);
  }
  sort(two.begin(), two.end());
  for(int i= n-1; i>0; i--){
    for(int j=0; j<i; j++){
      if(binary_search(two.begin(), two.end() ,a[i]-a[j])){
        cout<< a[i];
        return 0;
      }
    }
  }
}

26:37 parametric search 남음!

