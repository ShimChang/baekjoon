#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int is[51][51];
bool bo[51][51];
int dx[8]={0,0,1,-1,1,-1,1,-1};
int dy[8]={1,-1,0,0,-1,1,1,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(true){
        int w,h;
        cin>>w>>h;
        if(w==0&&h==0) break;
        int num=0;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>is[i][j];
            }
        }
        queue<pair<int,int> > q;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(bo[i][j]||is[i][j]==0) continue;
                q.push(pair<int,int>(i,j));
                num++;
                while(!q.empty()){
                    pair<int,int> cur=q.front();
                    q.pop();
                    for(int dir=0;dir<8;dir++){
                        int nx=cur.first+dx[dir];
                        int ny=cur.second+dy[dir];
                        if(nx<0||ny<0||nx>=h||ny>=w) continue;
                        if(bo[nx][ny]||is[nx][ny]==0) continue;
                        q.push(pair<int,int>(nx,ny));
                        bo[nx][ny]=true;
                    }
                }
            }
        }
        for(int i=0;i<50;i++){
            fill(is[i],is[i]+50,0);
            fill(bo[i],bo[i]+50,false);
        }
        cout<<num;
    }
}