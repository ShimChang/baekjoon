#include <iostream>
using namespace std;

bool bo[10000] = {false};

void def(int n)
{
    int sum = n;
    if (sum < 10000)
    {

        {
            while (n > 0)
            {
                sum += n % 10;
                n /= 10;
            }
            bo[sum] = true;
            def(sum);
        }
    }
    else
        return;
}

int main()

{
    for (int i = 1; i < 10000; i++)
    {
        def(i);
        if (bo[i]==false)
            cout << i << '\n';
    }
}