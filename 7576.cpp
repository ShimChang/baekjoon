#include<iostream>
#include<utility>
#include<queue>
using namespace std;
int board[1002][1002];
int dist[1002][1002];
int n,m;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> m >> n;
  queue<pair<int,int> > Q;
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cin>>board[i][j];
          if(board[i][j]==1){
              Q.push(pair<int,int>(i,j));
          }
          if(board[i][j]==0){
              dist[i][j]= -1;
          }
      }

  }
  int day=0;
  while(!Q.empty()){

    pair<int,int> cur = Q.front(); Q.pop();
    for(int dir = 0; dir < 4; dir++){
      int nx = cur.first + dx[dir];
      int ny = cur.second + dy[dir];
      if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if(dist[nx][ny]>=0) continue;
      dist[nx][ny] = dist[cur.first][cur.second]+1;
      Q.push(pair<int,int>(nx,ny));
    }
  }
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          if(dist[i][j]==-1){
              cout<<-1<<'\n';
              return 0;
          }
          day=max(dist[i][j],day);
      }
  }
  cout<<day<<'\n';
}