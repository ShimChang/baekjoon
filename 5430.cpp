#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        string str, str2, temp;
        int n;
        bool reverse = true;
        bool ans = true;
        cin >> str2;
        cin >> n;
        deque<int> dq;
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if ('0' <= str[i] && str[i] <= '9')
            {
                temp += str[i];
            }
            else if (str[i] == ',' || str[i] == ']')
            {
                if (!temp.empty())
                {
                    dq.push_back(stoi(temp));
                    temp.clear();
                }
            }
            else if (str[i] == '[')
                continue;
        }
        for (int i = 0; i < str2.length(); i++)
        {
            if (str2[i] == 'R')
            {
                reverse = !reverse;
            }
            else if (str2[i] == 'D')
            {
                if (dq.empty())
                {
                    cout << "error" << '\n';
                    ans = false;
                    break;
                }
                else
                {
                    if (reverse)
                    {
                        dq.pop_front();
                    }
                    else
                        dq.pop_back();
                }
            }
        }
        if (ans)
        {
            if (reverse)
            {
                cout << '[';
                while(!dq.empty())
                {
                    cout << dq.front();
                    dq.pop_front();
                    if(!dq.empty()) cout<<',';
                }
                cout << ']'<<'\n';
            }
            else
            {
                cout << '[';
                while(!dq.empty())
                {
                    cout << dq.back();
                    dq.pop_back();
                    if(!dq.empty()) cout<<',';
                }
                cout << ']'<<'\n';
            }
        }
    }
}
