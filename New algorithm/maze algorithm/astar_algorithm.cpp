// 1. P = 시작점
// 2. P에 f, g, h 할당
// 3. Open 리스트에 P 넣기
// 4. B = Open 리스트에서 가장 낮은 f 값을 가진 노드
//     a. B가 목표점이면, 경로 완성
//     b. Open 리스트가 비었으면, 목표점까지 경로가 존재하지 않음
// 5. C = B에 연결된 노드
//     a. C에 f, g, h 값 할당
//     b. Open/Close 리스트에서 C가 있는지 체크
//        1. 있으면, 더 낮은 f 값으로 경로 업데이트
//        2. 없으면, C를 Open 리스트에 넣기
//     c. 5번으로 돌아가서 B에 연결된 모든 노드를 대상으로 진행
// 6. 4번으로 돌아감

#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second

constexpr int MAX = 101;
constexpr double INF = 1e9+7;

//직선
const int dx1[4] = {0,0,1,-1};
const int dy1[4] = {-1,1, 0,0};

//대각선
const int dx2[4] = {1,-1,-1,1};
const int dy2[4] = {-1,1,-1,1};

using Pair = pair<int,int>;
using pPair = pair<double, Pair>;

struct Cell{
  int parent_x, parent_y;
  double f,g,h;
};

char zmap[MAX][MAX];
int ROW = 0, COL = 0;


//현재좌표가 도착지점과 일치하다면 참, 아니면 거짓을 반환하는 함수
bool isDestination(int row, int col, Pair dst){
  if (row == dst.X && col == dst.Y) return true;
  return false;
}

//현재좌표가 전체 맵안에 존재하면 참, 아니면 거짓을 반환하는 함수
bool isInRange(int row, int col){
  return (row >= 0 && row<ROW && col >= 0 && col < COL);
}

//현재좌표가 벽이아니라면 참, 아니면 거짓을 반환하는 함수
bool isUnBlocked(vector<vector<int>> &map, int row, int col){
  return (map[row][col] == 0);
}

//현재좌표가 도착지점까지의 거리를 계산하는 함수
double GethValue(int row, int col, Pair dst){
  return (double)sqrt(pow(row-dst.X,2)+pow(col-dst.Y, 2));
}

// backtracking을 이용하여 최단경로를 탐색하는 함수
void tracePath(Cell cellDetails[MAX][MAX], Pair dst){
  stack<Pair> s;
  int y =dst.X;
  int x = dst.Y;

  s.push({y,x});
  //cell Details의 x, y의 부모좌표가 모두 현재좌표와 동일할때까지 반복
  while(!(cellDetails[y][x].parent_x == x && cellDetails[y][x].parent_y == y)){
    int tempy = cellDetails[y][x].parent_y;
    int tempx = cellDetails[y][x].parent_x;
    y= tempy;
    x= tempx;
    s.push({y,x});
  }
  while(!s.empty()){
    zmap[s.top().X][s.top().Y] = '*';
    s.pop();
  }
}

//a*알고리즘을 실행하는 함수
bool aStatrSearch(vector<vector<int>>& map, Pair src, Pair dst){
  if(!isInRange(src.X, src.Y) || !isInRange(dst.X, dst.Y)) return false;
  if(!isUnBlocked(map, src.X, src.Y) || !isUnBlocked(map, dst.X, dst.Y)) return false;
  if(isDestination(src.X, src.Y, dst)) return false;

  bool closedList[MAX][MAX];
  memset(closedList, false, sizeof(closedList));

  Cell cellDetails[MAX][MAX];

  //내용 초기화
    //최대 유량 알고리즘과 유사
    //계산해야할 값부분을 INF로 하고, 계산할 경로는 -1로 초기화
  for(int i=0; i<ROW; ++i){
    for(int j=0; j<COL; ++j){
      cellDetails[i][j].f = cellDetails[i][j].g = cellDetails[i][j].h = INF;
      cellDetails[i][j].parent_x = cellDetails[i][j].parent_y = -1;
    }
  }

  //src의 좌표가 첫 좌표가 된다.
  int sy = src.X;
  int sx = src.Y;
  cellDetails[sy][sx].f = cellDetails[sy][sx].g = cellDetails[sy][sx].h =0.0;
  cellDetails[sy][sx].parent_x = sx;
  cellDetails[sy][sx].parent_y = sy;

  set<pPair> openList;
  openList.insert({0.0, {sy,sx}});

  //반복구조 bfs와 유사
  while(!openList.empty()){
    pPair p = *openList.begin();
    openList.erase(openList.begin());

    int y = p.Y.X;
    int x = p.Y.Y;
    closedList[y][x] =true;

    double ng, nf, nh;

    //직선
    for(int i=0; i<4; ++i){
      int ny = y+ dy1[i];
      int nx = x+ dx1[i];
      
      if(isInRange(ny, nx)){
        if(isDestination(ny, nx, dst)){
          cellDetails[ny][nx].parent_y = y;
          cellDetails[ny][nx].parent_x = x;
          tracePath(cellDetails, dst);
          return true;
        }

          //bfs와 굳이 비교하자면, closedList를 방문여부라고 생각
        else if(!closedList[ny][nx] && isUnBlocked(map, ny, nx)){
          // 이부분 y x , ny nx 헷갈리는거 조심
          ng = cellDetails[y][x].g +1.0;
          nh = GethValue(ny, nx,dst);
          nf= ng + nh;

          //만약 한번도 갱신이 안된 f거나, 새로 갱신될 f가 기존f보다 작을 시 참
          if(cellDetails[ny][nx].f == INF || cellDetails[ny][nx].f >nf){
            cellDetails[ny][nx].f = nf;
            cellDetails[ny][nx].g = ng;
            cellDetails[ny][nx].h = nh;
            cellDetails[ny][nx].parent_x = x;
            cellDetails[ny][nx].parent_y = y;
            openList.insert({nf, {ny, nx}});
          }
        }  
      }
    }
    // 대각선
    for(int i=0; i<4; ++i){
      int ny = y +dy2[i];
      int nx = x +dx2[i];
      
      if(isInRange(ny,nx)){
        if(isDestination(ny, nx, dst)){
          cellDetails[ny][nx].parent_y = y;
          cellDetails[ny][nx].parent_x = x;
          tracePath(cellDetails, dst);
          return true;
        }
        else if(!closedList[ny][nx] && isUnBlocked(map, ny, nx)){
          ng = cellDetails[y][x].g +1.414;
          nh = GethValue(ny, nx, dst);
          nf = ng+ nh;
          
          if(cellDetails[ny][nx].f == INF || cellDetails[ny][nx].f >nf){
            cellDetails[ny][nx].f = nf;
            cellDetails[ny][nx].g = ng;
            cellDetails[ny][nx].h = nh;
            cellDetails[ny][nx].parent_x = x;
            cellDetails[ny][nx].parent_y = y;
            openList.insert({nf, {ny,nx}});
          }
        }
      }
    }
  }
  return false;
}

//현재 맵의 상태를 출력하는 함수
void PrintMap(){
  for(int i=0; i<ROW; ++i){
    for(int j=0; j<COL; ++j){
      cout<<zmap[i][j]<<" ";
    }
    cout<<'\n';
  }
}

//텍스트파일로부터 맵정보를 불러오는 함수
vector<vector<int>> fileload(string filepath){
  ifstream ifs(filepath);

  int col, row, cur =0;
  
  if(ifs.is_open()){
    ifs >> ROW >>COL;
    vector<vector<int>> result(ROW, vector<int>(COL));

    for(int i=0; i<ROW; ++i){
      for(int j=0; j<COL; ++j){
        ifs >>result[i][j];
      }
    }
    return result;
  }
  return vector<vector<int>>();
}

int main(){ // 0: 빈공간, 1: 벽, 2: 출발지점, 3: 도착지점
  Pair src, dst;
  int row, col;

  /// 방법1 - 맵정보 직접 입력하기

  cin>> row>> col;
  ROW = row;
  COL = col;

  vector<vector<int>> grid(row, vector<int>(col));
  
  for(int i=0; i<row; ++i){
    for(int j=0; j<col; ++j){
      cin>>grid[i][j];
    }
  }

  /// 방법2 - 파일로 부터 맵정보 불러오기
  /*
  vector<vector<int>> grid = fileload("파일 주소값");
  */

  if(grid.empty()) return -1;

  for(int i=0; i<ROW; ++i){
    for(int j=0; j<COL; ++j){
      if(grid[i][j] == 2){
        src = {i,j};
        grid[i][j] = 0;
      }
      if(grid[i][j] == 3){
        dst = {i,j};
        grid[i][j] = 0;
      }
    }
  }


  for(int i=0; i<ROW; ++i){
    for(int j=0; j<COL; ++j){
      zmap[i][j] = grid[i][j] + '0';
    }
  }
  cout<<"\n";
  if(aStatrSearch(grid, src, dst)) PrintMap();
  else cout<<"실패!";

  return 0;
}