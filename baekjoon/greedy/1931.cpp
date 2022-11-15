#include<bits/stdc++.h>
using namespace std;

const int MAX = 20;
vector <pair<int,int>> schedule;


int main(){
  int n, st,en;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>st>>en;
    schedule.push_back({en,st});
  }
  sort(schedule.begin(), schedule.end());
  int time = schedule[0].first;
  int count =1;
  for(int i=1; i<n; i++){
    if(time <= schedule[i].second){
      count++;
      time = schedule[i].first;
    }
  }
  cout<<count;
}
