#include<iostream>
using namespace std;

int a[2000001] ={};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n,t,x, ans=0;
  cin >>n;
  for(int i=0; i<n; ++i){
    cin >>t;
    a[t]++;

  }
  cin>>x;
  for(int i =1; i<(x+1)/2; i++){
    if(a[i]==1 && a[x-1]==1) ans++;

  }
  cout<< ans;







/*
int a[1000001]={};
// 각 자연수의 존재 여부를 저장하는 배열, 아래에서 x-a[i]가 1000000보다 큰 경우를 예외처리하기 싫어서 그냥 배열을 최대 200만으로 잡음
bool occur[2000001];
int n, x;
  int ans = 0;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  cin >> x;

  for (int i = 0; i < n; i++) {
    // x-a[i]가 존재하는지 확인
    if(x-a[i] > 0 && occur[x-a[i]]) ans++;
    occur[a[i]] = true;
  }
  cout << ans;
*/

/*
    int n,x;
    int num;
    cin>>n;
    int a[n]= {0};

    for(int i=0; i<n; i++) cin>>a[i];
    cin >>x;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j]== x) num++;
        }
    }    
    cout<<num;*/
}