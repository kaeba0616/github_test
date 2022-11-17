//카잉 달력

//O(MN)
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, in b){
  if(a==0) return b;
  return gcd(b%a, a);
}

int lcm(int a, int b){
  return a/ gcd(a,b) * b;
}

int solve(int m, int n, int x, int y){
  if(x==m) x=0;
  if(y==n) y=0;
  int l = lcm(m,n)
  for(int i =x; i<=l; i +=m){ // for(int i =x; i<=m*n; i +=m){
    if(i==0) continue;
    if(i % n == y)
      return i;
  }
  return -1;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  while(n--){
    int m,n,x,y;
    cin >> m>>n>> x>>y;
    cout<< solve(m,n,x,y) << "\n";
  }
}

//중국인의 나머지 수 - > 찾아보기~ && 모듈로 역수를 구하기
// ? 식이 3개일때는 몇개의 수를 확인해야되나요? N+K개 

//O(MN)
/*
 #include<bits/stdc++.h>
using namespace std;

int gcd(int a, in b){
  if(a==0) return b;
  return gcd(b%a, a);
}

int lcm(int a, int b){
  return a/ gcd(a,b) * b;
}

int solve(int m, int n, int x, int y){
  if(x==m) x=0;
  if(y==n) y=0;
  int l = lcm(m,n)
  for(int i =1; i<=l; i++){
    if(i%m == x && i%n == y)
      return i;
  }
  return -1;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  while(n--){
    int m,n,x,y;
    cin >> m>>n>> x>>y;
    cout<< solve(m,n,x,y) << "\n";
  }
}
*/