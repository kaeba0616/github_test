#include<iostream>
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  //기초 정렬

  // O(n^2)
  /*
  int arr[10] = {3, 2, 7, 116, 62, 235,1,23 55, 77};
  int n= 10;
  for(int i= n-1; i>0; i--){
    int mxidx =0;
    for(int j=0; j<=i; j++){
      if(arr[mxidx] < arr[j]) mxidx=j;
    }
    swap(arr[mxidx], arr[i]);
  }
  
  
  int arr[10] = {3, 2, 7, 116, 62, 235,1,23 55, 77};
  int n= 10;
  for(int i= n-1; i>0; i--){
    swap(*max_element(arr, arr+i+1));
  */
    // max_element (arr , arr+i) arr[0] 부터 'arr[i-1]'까지에서의 주소를 반환!
    //reference - how to find the index of max_element : max_element(arr, arr+i)-arr 
    //           => max_element - reference / arr - reference  ==> 둘이 빼면 계산 가능!

   //buble sort
   /*
   int arr[5] = {-2, 2,4,6,13}
   int n=5;
   for(int i=0; i<n; i++){
    for(int j=0; j<n-1-i; j++){
      if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
    }
   }
  



  }
  */
  



}
