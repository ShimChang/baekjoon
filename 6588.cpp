#include <iostream>
using namespace std;

const int MAX = 1000000;
bool check[MAX + 1];    // 지워졌으면 true
int prime[MAX]; // 소수 저장
int pn;   // 소수의 개수

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 2; i <= MAX; i++)
    {
        if (check[i] == false)
        {
            prime[pn++] = i;
            for (int j = i + i; j <= MAX; j += i)
            {
                check[j] = true;
            }
        }
    }
    while (true)
    {
        int num;
        cin >> num;
        if(num==0){
            break;
        }

        for (int i = 1; i < pn; i++)
        {
            if (check[num - prime[i]] == false)
            {
                cout <<num<<" = "<< prime[i] << " + " << num - prime[i] << '\n';
                break;
            }
        }
    }
}