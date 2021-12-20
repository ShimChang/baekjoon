#include<iostream>
#include<utility>
#include<queue>
using namespace std;

int dx[6]={0,0,1,0,-1,0};
int dy[6]={0,0,0,1,0,-1};
int dz[6]={1,-1,0,0,0,0};
int m,n,h;
int board[102][102][102];
int vis[102][102][102];

int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    cin>>m>>n>>h;
    queue<pair<pair<int,int>,int> > q;
    for(int i=0;i<h;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>board[i][j][k];
                if(board[i][j][k]==1) q.push(make_pair(make_pair(i, j), k));
                if(board[i][j][k]==0) vis[i][j][k]=-1;
            }
        }
    }
    while(!q.empty()){
        pair<pair<int,int>,int> cur=q.front();
        q.pop();
        for(int dir=0;dir<6;dir++){
            int nz= cur.first.first+dz[dir];
            int nx=cur.first.second+dx[dir];
            int ny=cur.second+dy[dir];
            if(nx<0||ny<0||nz<0||nx>=n||ny>=m||nz>=h||vis[nz][nx][ny]>=0) continue;
            vis[nz][nx][ny]=vis[cur.first.first][cur.first.second][cur.second]+1;
            q.push(make_pair(make_pair(nz,nx),ny));
        }
    }
    int day=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                if(vis[i][j][k]==-1){
                    cout<<-1<<'\n';
                    return 0;
                }
                day=max(day,vis[i][j][k]);
            }
        }
    }
    cout<<day<<'\n';
    
    
}