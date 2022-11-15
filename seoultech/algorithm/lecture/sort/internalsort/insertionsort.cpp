//O(n^2)
#include<bits/stdc++.h>
using namespace std;

int arr[103];

void insertionsort(int n){
  for(int i=1; i<n; i++){
    currentElement = arr[i];
    int j= i-1;
    while(j>=0 && (arr[j] > currentElement)){
      arr[j+1] = arr[j]
      --j;
    }
    arr[j+1] = currentElement;
  }
}

int main(){

}