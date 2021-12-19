#include<iostream>
#include<utility>
#include<queue>
using namespace std;

int vis[301][301];
int dx[8]={2,1,-1,-2,-2,-1,1,2};
int dy[8]={1,2,2,1,-1,-2,-2,-1};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            fill(vis[i],vis[i]+n,-1);
        }
        queue<pair<int,int> > q;
        int sx,sy,ex,ey;
        cin>>sx>>sy;
        cin>>ex>>ey;
        q.push(pair<int,int>(sx,sy));
        vis[sx][sy]=0;
        while(vis[ex][ey]==-1){
            pair<int,int>cur=q.front();
            q.pop();
            for(int dir=0;dir<8;dir++){
                int nx=cur.first+dx[dir];
                int ny=cur.second+dy[dir];
                if(vis[nx][ny]!=-1) continue;
                if(nx<0||ny<0||nx>=n||ny>=n) continue;
                q.push(pair<int,int>(nx,ny));
                vis[nx][ny]=vis[cur.first][cur.second]+1;
            }
        }
        if(sx==ex&&sy==ey) cout<<0<<'\n';
        else cout<<vis[ex][ey]<<'\n';
    }
}