#include <iostream>
#include <utility>
#include <queue>
#include<algorithm>
using namespace std;

string board[1002];
int vis[1002][1002];
int fire[1002][1002];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r, c;
    cin >> r >> c;
    queue<pair<int, int> > Q;
    queue<pair<int, int> > Q2;
    for(int i=0;i<r;i++){
        fill(fire[i],fire[i]+c,-1);
        fill(vis[i],vis[i]+c,-1);
    }
    for(int i = 0; i < r; i++)
     cin >> board[i];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (board[i][j] == 'F')
            {
                Q.push(pair<int, int>(i, j));
                fire[i][j] = 0;
            }
            if (board[i][j] == 'J')
            {
                Q2.push(pair<int, int>(i, j));
                vis[i][j] = 0;
            }
        }
    }

    while (!Q.empty())
    {
        pair<int, int> cur = Q.front();
        Q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 0 || ny < 0 || nx >= r || ny >= c)
                continue;
            if (fire[nx][ny] >=0 || board[nx][ny] == '#')
                continue;
            fire[nx][ny] = fire[cur.first][cur.second] + 1;
            Q.push(pair<int, int>(nx, ny));
        }
    }
    while (!Q2.empty())
    {
        pair<int, int> cur = Q2.front();
        Q2.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 0 || ny < 0 || nx >= r || ny >= c){
                cout<<vis[cur.first][cur.second]+1<<'\n';
                return 0;
            }    
            if (vis[nx][ny] >=0 || board[nx][ny] == '#')
                continue;
            if (fire[nx][ny]!=-1&&fire[nx][ny] <= vis[nx][ny]+1)
                continue;
            vis[nx][ny] = vis[cur.first][cur.second] + 1;
            Q2.push(pair<int, int>(nx, ny));
        }
    }
    cout<<"IMPOSSIBLE"<<'\n';
}