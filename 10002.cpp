#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int a = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        int b = (r1 + r2) * (r1 + r2);

        if (x1 == x2 && y1 == y2) // 중점이 같을때
        {
            if (r1 == r2) // 두 원이 일치
                cout << -1 << '\n';
            else                   // 한 원이 다른 원 내부에 있음
                cout << 0 << '\n';
        }
        else
        {

            if (a > b) // 두원이 만나지 않을때
            {
                cout << 0 << '\n';
            }
            else if ((r2 - r1) * (r2 - r1) == a) // 내접
                cout << 1 << '\n';
            else if (a < b) // 두원이 겹칠때

                cout << 2 << '\n';

            else if (a == b) // 두 원이 외접
                cout << 1 << '\n';
        }
    }
}
