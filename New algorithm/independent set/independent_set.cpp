#include<bits/stdc++.h>
using namespace std;

int n;
int dp[10001][2]; 
// dp[][0]은 해당 노드를 독립으로 선택하지 않음,
// dp[][1]은 해당 노드를 독립집합으로 선택

int cost[10001];
vector<vector<int>> edge;
bool visited[10001];
vector<int> ansvec;

void dfs(int n){
  visited[n] = true;
  dp[n][1] = cost[n];
  for(int child: edge[n]){
    if(visited[child]) continue;
    dfs(child);
    dp[n][1] += dp[child][0];
    dp[n][0] += max(dp[child][0], dp[child][1]);
  }
}

void track(int prev, int cur, bool state){
  if(state){ //state ==1, cur 노드가 독립집합에 포함되어야 된다는 뜻, child는 전부 빠져야 된다는 것
    ansvec.push_back(cur);
    for(auto child: edge[cur]){
      if(child == prev) continue;
      track(cur, child, 0);
    }
  }
  else{ // state==0, child 노드의 dp값을 보면서 들어 가는게 최대값을 만들게 하는지 안들어 가는게 최댓값을 만들게 하는지를 봐라.
    for(auto child:edge[cur]){
      if(child == prev) continue;
      if(dp[child][1] >= dp[child][0])
        track(cur, child, 1);
      else
        track(cur, child, 0);
    }
  }
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin>>n;
  edge.resize(n+1);
  for(int i=1; i<=n; i++) cin>>cost[i];
  for(int i=1; i<n; i++){
    int a, b;
    cin >>a>>b;
    edge[a].push_back(b);
    edge[b].push_back(a);
  }
  dfs(1);
  int ans0 = dp[1][0];
  int ans1 = dp[1][1];
  if(ans0 > ans1) track(-1,1,0);
  else track(-1,1,1);

  sort(ansvec.begin(), ansvec.end());
  cout<<max(ans0, ans1) <<"\n";
  for(int n: ansvec) cout<<n<<" ";
}