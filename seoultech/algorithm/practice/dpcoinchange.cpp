#include <bits/stdc++.h>
using namespace std;

int coin[12]; //coin의 종류 구분
int Change[100000]; // 거스름돈!
int coinIdx;  //coin 종류의 개수
const int INF = 999999; 

void split(string s) {
  string tmp;   // 가상 string 변수만들기
  s+=',';   //,를 추가하여 마지막 변수도 배열에 추가되게 설정!
  for (auto c : s) {  // string s의 값을 int로 바꿔서 coin배열에 저장!
    if (c == ',') coin[++coinIdx] = stoi(tmp);  // string value 를 , 로 int value 구분!
    else if (c == ' ')  tmp = "";  // initialize
    else  tmp.push_back(c);  // 가상 string 변수에 저장!
  }
}

int CoinChange(int M){ 
  for(int i=0; i<=M; i++) Change[i] = INF; //change array initialize - 최소값을 구하는 것이기 때문에 큰값으로 initialize
  Change[0]=0;  // 0값은 거스름돈이 없으므로 0으로 intialize
  for(int i=1; i<=M; i++){  //1~M까지의 돈의 최소 동전 개수 구분! 
    for(int j= 1; j<=coinIdx; j++){   //coin 종류별로 하나씩 구분!
      if(coin[j]<=i && Change[i-coin[j]]+1 <Change[i])   
        Change[i] =Change[i-coin[j]]+1; //그 전에 저장되있던 change값과 현재 coin에 대한 거스름돈의 개수중 가장작은값 저장!
    }
  }
  return Change[M];
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int M;
  string s;
  getline(cin, s); // 한줄을 string에 저장!
  cin>>M;
  split(s); // coin구분
  int ans = CoinChange(M); // M값에 대한 거스름 돈 개수 구하기
  cout<<ans;
}