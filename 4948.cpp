#include <iostream>
using namespace std;
const int MAX = 246912;
bool check[MAX + 1];

int main()
{

    check[0] = check[1] = true;
    

    for (int i = 2; i + i <= MAX; i++)
    {
        if (check[i] == false)
        {
            for (int j = i * i; j <= MAX; j += i)
            { //i가 백만인 경우 int범위를 넘어가서 i*2
                check[j] = true;
            }
        }
    }
    while (true)
    {
        int n;
        int pn = 0;
        cin >> n;
        if (n == 0)
            break;
        for (int i = n; i <= 2 * n; i++)
        {
            if (check[i] == false)
                pn++;
        }
        cout << pn << '\n';
    }
}