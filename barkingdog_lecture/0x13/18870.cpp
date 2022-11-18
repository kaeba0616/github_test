//좌표 압축
#include<bits/stdc++.h>
using namespace std;

int n;
int x[1000005];
vector<int> tmp, uni; //unique
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i=0;i<n; i++){
    cin >> x[i];
    tmp.push_back(x[i]);
  }
  sort(tmp.begin(), tmp.end());
  for(int i=0; i<n; i++){
    if(i==0 || tmp[i-1] != tmp[i])  uni.push_back(tmp[i]);
  }
  for(int i=0; i<n; i++)
    cout<< lower_bound(uni.begin(), uni.end(), x[i]) -uni.begin() <<" ";
}

//STL이용
/*
int n;
int x[1000005];
vector<int> uni; //unique
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> x[i];
    uni.push_back(x[i]);
  }
  sort(uni.begin(), uni.end());
  uni.erase(unique(uni.begin(), uni.end()), uni.end());
  for(int i=0; i<n; i++)
    cout<< lower_bound(uni.begin(), uni.end(), x[i]) -uni.begin()<< " ";
}
*/