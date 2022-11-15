#include<iostream>
#include<vector>
using namespace std;

#define X first
#define Y second

const int MAX = 100;

typedef pair<int, int> pii;
vector<int> p;
pii arr[MAX];
pii tmp_x[MAX];
pii tmp_y[MAX];

void mergesort_x(int n, int st, int en){
  if(n==1) return;

  int n2= n/2;
  int mid = (st+en)/2;
  mergesort_x(n2, st, mid);
  mergesort_x(n2,  mid, en);
  merge_x(n, st, en);
}

void merge_x(int n, int st, int en){
  int mid = (st+en)/2;
  int lidx = st;
  int ridx = mid;
  for(int i=0; i<n; i++){
    if(lidx == mid) tmp_x[i] = arr[ridx++]; 
    else if(ridx == en) tmp_x[i] = arr[lidx++];
    else if(arr[lidx].X<=arr[ridx].X) tmp_x[i] = arr[lidx++];
    else tmp_x[i] = arr[ridx++];
}

void mergesort_y(int n, int st, int en){
  if(n==1) return;

  int n2= n/2;
  int mid = (st+en)/2;
  mergesort_y(n2, st, mid);
  mergesort_y(n2,  mid, en);
  merge_y(n, st, en);
}

void merge_y(int n, int st, int en){
  int mid = (st+en)/2;
  int lidx = st;
  int ridx = mid;
  for(int i=0; i<n; i++){
    if(lidx == mid) tmp_x[i] = arr[ridx++]; 
    else if(ridx == en) tmp_x[i] = arr[lidx++];
    else if(arr[lidx].Y<=arr[ridx].Y) tmp_x[i] = arr[lidx++];
    else tmp_x[i] = arr[ridx++];
}


void f(int n, int x, int y){
  if(check)
}

bool check(int n, int x, int y){

}


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;

  for(int i=0; i<n; i++){
    cin>>arr[i].X>>arr[i].Y;
  }
}





