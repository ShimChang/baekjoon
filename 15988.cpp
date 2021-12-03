#include <iostream>
using namespace std;

long long mod = 1000000009;
long long d[1000001];
long long n = 1000000;

int main()
{
  
    d[0] = 1;

    for (int j = 1; j <= n; j++)
    {
        if (j >= 1)
        {
            d[j] += d[j - 1];
        }
        if (j >= 2)
        {
            d[j] += d[j - 2];
        }
        if (j >= 3)
        {
            d[j] += d[j - 3];
        }
        d[j]%=mod;
        
    }
    int t;

    cin >> t;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        cout << d[a]<< '\n';
    }
}