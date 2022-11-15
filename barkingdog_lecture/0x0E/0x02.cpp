//Quick Sort - 재귀 - 추가적인 공간 차지x  - 자리바꿈만으로 처리됨 - cache hit rate is so high, then speed is fast
// 추가적인 공간 차지않는 정렬 - in-place sort
// 평균적 (nlgn) 최악 (n^2)
#include<iostream>
using namespace std;

void quick_sort(int st, int en){
  if(en <= st+1) return;
  int pivot = arr[st];
  int l =st+1; // 0은 pivot값이니까 1부터 정렬
  int r = en-1; // 0부터 n개니까 n-1까지 정렬
  while(1){
    while(l <= r && arr[i] <= pivot) l++;
    while(l <= r && arr[r] > pivot) r--;
    if(l>r) break;
    swap(arr[l], arr[r]);
  }
  swap(arr[0], arr[r]);
  quick_sort(st, r);
  quick_sort(r+1, en);

}



int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  quick_sort(0,n);
  for(int i=0; i<n; i++) cout<< arr[i]<<" ";
  
 
  /*
  int arr[8] = {6,-8,1,12,8,3,7,-7};
  int tmp[8];
  int tidx=0;
  int pivot = arr[0];

  for(int i=1; i<8; i++) if(arr[i] <= pivot) tmp[tidx++] = arr[i];
  tmp[tidx++] = pivot;
  for(int i =1; i<8; i++) if(arr[i]>pivot) tmp[tidx++] =arr[i];
  for(int i=0; i<8; i++) arr[i] = tmp[i];
  */
}

// r l 로 pivot과 비교!