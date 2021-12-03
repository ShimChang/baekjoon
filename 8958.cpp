#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;

    int cnt = 1;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == 'O')
            {
                if (str[j] == str[j - 1] && j > 0)
                {
                    cnt++;
                }
                ans+=cnt;
                
            }
            else
            {
                cnt = 1;
            }
        }
        cnt = 1;

        cout << ans << '\n';
        ans = 0;
    }
}