#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    while (true)
    {
        bool bo = true;
        string str;
        getline(cin, str);
        stack<char> ch;
        if (str == ".")
            break;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(' || str[i] == '[')
                ch.push(str[i]);
            else if (str[i] == ')')
            {
                if (!ch.empty() && ch.top() == '(')
                    ch.pop();
                else
                {
                    bo = false;
                    break;
                }
            }
            else if (str[i] == ']')
            {
                if (!ch.empty() && ch.top() == '[')
                    ch.pop();
                else
                {
                    bo = false;
                    break;
                }
            }
            else
                continue;
        }
        if (bo == false)
            cout << "no" << '\n';
        else
        {
            if (!ch.empty())
                cout << "no" << '\n';

            else
                cout << "yes" << '\n';
        }
    }
}
