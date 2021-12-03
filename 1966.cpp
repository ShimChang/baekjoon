#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while (n--)
    {
        queue<int> qu;
        int a, b;
        cin >> a >> b;
        int max = 0;
        int d;
        int f = 0;
        for (int i = 0; i < a; i++)
        {
            int c;
            cin >> c;
            if (i == b)
                d = i;
            if (c > max)
                max = c;
            qu.push(c);
        }
        while (qu.empty())
        {
            if (qu.front() == max)
                break;
            qu.push(qu.front());
            qu.pop();
        }
        while (qu.empty())
        {
            if (f == b)
            {
                cout << f << '\n';
                break;
            }
            qu.pop();
            f++;
        }
    }
}
