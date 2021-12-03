#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    while (!q.empty())
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                if (j == k)
                {
                    v[i] = q.front();
                    q.pop();
                }
                else
                {
                    q.push(q.front());
                    q.pop();
                }
            }
        }
    }
    cout << '<';
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            cout << v[i] << '>' << '\n';
        else
            cout << v[i] << ", ";
    }
}