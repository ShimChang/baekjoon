#include<iostream>
#include<utility>
#include<queue>
using namespace std;

string board[1002];
int vis[1002][1002];
int fire[1002][1002];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r,c;
    cin>>r>>c;
    queue<pair<int,int> > Q;
    queue<pair<int,int> > Q2;
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
          cin>>board[i][j];
          if(board[i][j]=='#'){
              Q.push(pair<int,int>(i,j));
              fire[i][j]=1;
          }
          if(board[i][j]=='J'){
              Q2.push(pair<int,int>(i,j));
          }

      }
      
    }

    while(!Q.empty()){
        pair<int,int> cur=Q.front();
        Q.pop();
        for(int i=0;i<4;i++){
            int nx=cur.first+dx[i];
            int ny=cur.second+dy[i];
            if(nx<0||ny<0||nx>=r||ny>=c) continue;
            if(vis[nx][ny]>0||board[nx][ny]!='.') continue;
            if(board[nx][ny]=='#') continue;
            vis[nx][ny]=vis[cur.first][cur.second]+1;
            fire[nx][ny]=vis[nx][ny];
            Q.push(pair<int,int>(nx,ny));
        }

    }
    for(int i=0;i<r;i++) fill(vis[i],vis[i]+c,0);
    int ans=0;
    
    while(!Q2.empty()){
        pair<int,int> cur=Q2.front();
        Q2.pop();
        for(int i=0;i<4;i++){
            int nx=cur.first+dx[i];
            int ny=cur.second+dy[i];
            if(nx<0||ny<0||nx>=r||ny>=c) continue;
            if(vis[nx][ny]>0||board[nx][ny]!='.') continue;
            if(board[nx][ny]=='#') continue;
            vis[nx][ny]=vis[cur.first][cur.second]+1;
            if(fire[nx][ny]>=vis[nx][ny]) {
                cout<<"IMPOSSIBLE"<<'\n';
                return 0;
            }
            Q2.push(pair<int,int>(nx,ny));
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            max(ans,vis[i][j]);
        }
    }
    cout<<ans;
    
    



}