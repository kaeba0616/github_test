//Merge Sort

//BOJ no.11728

#include<iostream>
using namespace std;

int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,m;

  int a[1000005], b[1000005],c[1000005];
  
  cin>>n>>m;
  for(int i = 0; i<n; i++) cin>> a[i];
  for(int i = 0; i<m; i++) cin>> b[i];

  int aidx = 0, bidx = 0;

  for(int i =0; i< n+m; i++){
    if(bidx ==m) c[i] = a[aidx++];
    else if(aidx==n) c[i] = b[bidx++];
    else if(a[aidx]<=b[bidx]) c[i] = a[aidx++];
    // a[aidx] < b[bidx]로 바꾸면 // a[aidx] = b[bidx]일때 stable sort에서 오류발생!
    else c[i] = b[bidx++];
  } 
  for(int i =0; i<n+m; i++) cout<< c[i] <<' ';

}

/*
  int aidx = 0, bidx = 0;
  for(int i =0; i<n+m; i++){
    if(bidx == m) c[i] = a[aidx++];
    else if(aidx == n) c[i] = b[bidx++];
    else if( aidx <= bidx) c[i] = a[aidx++];
    else c[i] =b[bidx++];
  }
*/

//merget sort 3 step!
// 1. 2개로 나눈다
// 2. 2개를 정렬한다.

/*
   길이가 1인 리스트를 정렬할 수 있다.
   길이가 N인 두 정렬된 리스트를 합칠 수 있다.
   길이가 N인 리스트를 정렬할 수 있으면 길이가 2N인 리스트를 정렬할 수 있다.
*/
// 3. 정렬한 2개를 합친다.
 

//stable sort

//38 21 21 21 -> 숫자가 같아도 원래 리스트의 앞에 있던 원소를 먼저 보냄

