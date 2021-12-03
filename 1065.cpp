#include <iostream>
using namespace std;

int ans = 0;

void def(int n)
{
    int a = 0;
    int d[3] = {1000};
    if(n==1000) return;
    if (n > 0 && n < 100)
        ans++;
    else
    {
        while (n > 0)
        {
            d[a] = n % 10;
            a++;
            n /= 10;
        }
        if (d[1] - d[0] == d[2] - d[1])
        {
            ans++;
        }
    }
}
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        def(i);
    }
    cout << ans << '\n';

    return 0;
}