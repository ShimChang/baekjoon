#include <iostream>
#include <utility>
#include <queue>
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int board[51][51];
bool vis[51][51];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        

        int m, n, k;
        cin >> m >> n >> k;
        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            board[b][a] = 1;
        }
        int num = 0;
        queue<pair<int, int> > q;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (board[i][j] == 1 && vis[i][j]==false){
                num++;
                q.push(pair<int, int>(i, j));
                vis[i][j] = 1;
                while (!q.empty())
                {
                    pair<int, int> cur = q.front();
                    q.pop();
                    for (int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if (board[nx][ny] !=1 || vis[nx][ny]==true)
                            continue;
                        if (nx < 0 || ny < 0 || nx >= n || ny >= m)
                            continue;
                        q.push(pair<int, int>(nx, ny));
                        vis[nx][ny] = true;
                    }
                }
                }
            }
        }
        cout << num << '\n';
        for(int i=0;i<52;i++){
            fill(board[i],board[i]+m,0);
            fill(vis[i],vis[i]+m,0);
        }
    }
}