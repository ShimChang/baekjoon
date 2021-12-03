#include <iostream>
using namespace std;

int main()
{
    while (true)
    {

        int d[3];
        int tmp = 0;
        int ans = 0;

        for (int i = 0; i < 3; i++)
        {
            cin >> d[i];
            if (tmp < d[i])
            {
                tmp = d[i];
            }
        }
        if(d[0]==0&&d[1]==0&&d[2]==0) break;
        for (int i = 0; i < 3; i++)
        {
            if (d[i] == tmp)
                continue;
            else
                ans += (d[i] * d[i]);
        }
        if (ans == tmp * tmp)
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
    }
}