//O(n^2)
#include<bits/stdc++.h>
using namespace std;

int arr[103];
int n;

void selectionsort(int n){
  for(int i=0; i<n-1; i++){
    int min =i;
    for(j = i+1; j<n; j++){
      if(arr[j] < arr[min])
        min = j;
    }
    swap(a[i], a[min]);
  }

}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for()...
}