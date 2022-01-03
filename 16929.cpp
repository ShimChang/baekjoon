#include<iostream>
#include<vector>
#include<utility>
using namespace std;

char board[51][51];
bool vis[51][51];
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
int n,m;
void dfs(int x,int y,int cnt,char color){
    for(int k=0;k<4;k++){
        int nx=x+dx[k];
        int ny=y+dy[k];
        if(0<=nx&&0<=ny&&)
    }

}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j])
        }
    }
}