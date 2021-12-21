#include<iostream>
#include<utility>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int board[101][101];
bool vis[101][101];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main(){
    int m,n,k;
    cin>>m>>n>>k;
    for(int i=0;i<k;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        for(int j=a;j<c;j++){
            for(int k=b;k<d;k++){
                board[k][j]=-1;
            }
        }
    }
    int area=0;
    vector<int> v;
    queue<pair<int,int> > q;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(vis[i][j]||board[i][j]==-1) continue;
            area++;
            q.push(pair<int,int>(i,j));
            vis[i][j]=1;
            int size=0;
            while(!q.empty()){
                pair<int,int> cur=q.front();
                size++;
                q.pop();
                for(int dir=0;dir<4;dir++){
                    int nx=cur.first+dx[dir];
                    int ny=cur.second+dy[dir];
                    if(nx<0||ny<0||nx>=m||ny>=n) continue;
                    if(board[nx][ny]==-1||vis[nx][ny]) continue;
                    vis[nx][ny]=1;
                    q.push(pair<int,int>(nx,ny));
                }
            }
            v.push_back(size);
        
        }
    }
    sort(v.begin(),v.end());
    cout<<area<<'\n';
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";


}