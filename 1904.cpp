#include <iostream>
using namespace std;

int d[1000001] = {0};

int main()
{
    int n;
    cin >> n;

    
    d[1] = 1;
    d[2]=2;
    
    

    for (int i = 3; i <= n; i++)
    {
        if (i >= 1)
            d[i] += d[i - 1];
        if (i >= 2)
            d[i] += d[i - 2];
        d[i] %= 15746;
    }
    cout << d[n]%15746 << '\n';
}