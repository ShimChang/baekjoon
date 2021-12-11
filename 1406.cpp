#include <iostream>
#include <list>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int n;
    cin >> n;
    list<char> lt;
    for (int i = 0; i < str.length(); i++)
    {
        lt.push_back(str[i]);
    }
    while (n--)
    {
        list<int>::iterator iter= lt.end();

        char ch;
        cin >> ch;
        if (ch == 'L')
        {
            if (cur > 0)
            {
                cur--;
            }
        }
        else if (ch == 'D')
        {
            if (cur < str.length())
                cur++;
        }
        else if(ch=='B'){
            if(cur>0){
                lt.erase(iter);
            }

        }
    }