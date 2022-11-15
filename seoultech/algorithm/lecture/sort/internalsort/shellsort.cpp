#include <bits/stdc++.h>
using namespace std;

int arr[1003];
int n;

void shellsort(int n) { 
  for (int gap = n / 2; gap > 0; gap = 2) {  //gap에 대한 조건 설정
    //index가 gap에서부터 즉, 첫번째 값이 정렬됬다고 가정한 후 그 다음 값을 선택
    for (int i = gap; i < n; i++) {  
      //선택한 값을 임시 변수에 저장한 후
      int temp = arr[i];
      int j;
      //처음 정렬된 값과 정렬안된 값중 가장 가까운 index를 가진 값을 비교
      for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
        //임시 변수 값이 정렬된 값보다 작으면 정렬된 값을 임시변수의 위치로 이동시킴
        arr[j] = arr[j - gap];
      //임시변수값을 정렬된 값의 위치로 이동
      //만약 임시 변수 값이 정렬된 값보다 더 크면 위치 변화 없음
      arr[j] = temp;
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;

  for (int i = 0; i < n; i++) cin >> arr[i];
  shellsort(n);
  for (int i = 0; i < n; i++) cout << arr[i] << "\n";
}