#include <iostream>
#include <vector>
using namespace std;

bool vis[101][101];
int board[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int n;

void dfs(int x, int y, int cnt)
{
    vis[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = x + dy[i];
        if (nx >= 0 && ny >= 0 && nx <= n && ny <= n)
        {
            if (board[nx][ny] > cnt && vis[nx][ny] == false)
            {
                dfs(nx, ny, cnt);
            }
        }
    }
}
int main()
{
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }
    for (int k = 1; k <=100; k++)
    {
        int num=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] > k && vis[i][j] == false)
                {
                    dfs(i, j, k);
                    num++;
                }
            }
        }
        for(int l=0;l<101;l++){
            fill(vis[l],vis[l]+100,false);
        }
        v.push_back(num);
    }
    int max=0;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<'\n';
    }
    cout << max;
}