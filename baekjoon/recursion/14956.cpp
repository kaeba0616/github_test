#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second

typedef pair<int, int> pii;


pii philo(int side, int walk){
  if(side == 2){
    switch(walk){
      case 1:
      return {1,1};

      case 2:
      return {1,2};
      
      case 3:
      return {2,2};
      
      case 4:
      return {2,1};
    }
  }
  int half = side/2, section = half*half;
  if(walk <=section){
    pii rv = philo(half, walk);
    return {rv.Y , rv.X};
  }
  else if(walk<=section*2){
    pii rv = philo(half, walk-section);
    return {rv.X, half + rv.Y};
  }
  else if(walk <=section*3){
    pii rv = philo(half, walk-2*section);
    return{half +rv.X, half+rv.Y};
  }
  else{
    pii rv = philo(half, walk-3*section);
    return{2*half-rv.Y+1, half-rv.X+1};
  }
}

//3, 2

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int  side, walk;
  cin>> side>>walk;
  pii ans = philo(side, walk);
  cout<<ans.X<<" "<<ans.Y;
}