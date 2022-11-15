#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second

typedef pair<int, int> pii;
vector <pii> p;  

int dist(pii &CP){
  auto [p1, p2] : CP;
  int distx = p[p1].X - p[p2].X;
  int disty = p[p2].Y - p[p2].Y;
  return sqrt(distx*distx + disty*disty);
  }

pii ClosestPair(int st, int en){
  if(en-st<3) return;

  mid = (st+en)/2;
  pii CPL = ClosestPair(st, mid);
  pii CRP = ClosestPair(mid, en);
  int d = min(dist(CPL), dist(CPR));
}




int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin<<n;
  p.resize(n);

  for(int i =0; i<n; i++) cin>>p[i].X >> p[i].Y;
  sort(p.begin(), p.end());

}













/*
typedef pair<int,int> pii;

#define X first;
#define Y second;

int n;
vector <pii> p;

int dist(pii &CP){
  auto [p1, p2] : CP;
  //tie( , ) = CP;
  int distx = p[p1].X-p[p2].X;
  int disty = p[p1].Y-p[p2].Y;
  return sqrt(distx*distx + disty*disty);
}

pii Closestpair(int st, int en){
  
  len = en-st;
  
  pii CPL = Closestpair(st, st+len/2);
  pii CPR = Closestpair(st+len/2, en);
  pii CPC = Closestpair();
  int d = min(dist(CPL),dist(CPR))


}



int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin>>n;
  p.resize(n);

  for(int i =0; i<n; i++) cin>> p(i).X >>p(i).Y;
  sort(p.begin(), p.end());

}

*/