#include<iostream>
#include<queue>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

int board[26][26];
bool vis[26][26];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>board[i][j];
        }
    }
    queue<pair<int,int> > q;
    vector<int> v;
    int area=0;
    int num=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vis[i][j]||board[i][j]==0) continue;
            area++;
            vis[i][j] = 1;
            q.push(pair<int, int>(i, j));
            while(!q.empty()){
                num++;
                pair<int,int> cur=q.front();
                q.pop();
                for(int dir=0;dir<4;dir++){
                    int nx=cur.first+dx[dir];
                    int ny=cur.second+dy[dir];
                    if(nx<0||ny<0||nx>=n||ny>=n) continue;
                    if(board[nx][ny]==0||vis[nx][ny]) continue;
                    vis[nx][ny]=1;
                    q.push(pair<int,int>(nx,ny));
                }
                
            }
            v.push_back(num);
            num=0;

        }
    }
    sort(v.begin(),v.end());
    cout<<area<<'\n';
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<'\n';
    }

    

}