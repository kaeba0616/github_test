#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second

vector <pair<double,double>> w;   //물건의 무게와 가치에 대한 정의 ( double 값은 greedy하게 단위무게당 최대 가치를 가져야되기 때문에 설정하였다.)
int K[103][10003];                //배낭 용량과 물건 사이의 계산을 위한 배열
int n,C;                          //물건의 수와 배낭의 용량


// 벡터 배열을 단위무게당 가치가 큰 순서로 정렬하기 위한 compare값 설정
bool compare(auto &a, auto &b){
  if(a.X/a.Y == b.X/b.Y)
    return a.Y < b.Y
  return a.X/a.Y > b.X/b.Y;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>C;                       //물건의 수와 배낭의 용량 입력
  for(int i=0; i<n; i++){
    int a,b;
    cin>>a>>b;                     //물건의 무게와 가치 입력
    w.push_back({a,b});            //물건의 벡터 배열에 추가
  }

  sort(w.begin(), w.end(), compare);        //벡터 배열 단위무게당 최대가치순으로 정렬
  pair<double,double> target = {0.0,0.0};   //0번의 물건이 없으므로 그것에대한 초기값
  w.insert(w.begin(), target);              //0번의 물건 추가


  for(int i=1; i<=n; i++){         // 물건의 종류
    for(int j=1; j<=C; j++){       // 임시 배낭으로 구하고자 하는 값을 DP로 계산
      if(w[i].Y > j){              // 물건 i의 무게가 배낭의 용량을 초과하면 담을 수 없음
        K[i][j] = K[i-1][j];       // 그 i-1 미리 선언한 값을 가져옴
      } 
      else  K[i][j] = max({K[i-1][j],K[i-1][j-(int)w[i].Y]+(int)w[i].X});
      // 물건 i를 배낭에 담는 경우, 현재 무게임 j에서 물건 i의 무게인 w를 뻰 상태에서 물건을 i-1까지 고려했을 때의 최대 가치인 K[i-1][j-w[i].Y]+W[i].X를 비교
    }
  }
  cout<<K[n][C];
}
  
3 5 < 3 0 + 60