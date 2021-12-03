#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> list(n);

    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    for (int i = 1; i < n; i++)
    {
        int j=i-1;
        int key = list[i];
        while(j>=0&&list[j]<key){
            list[j+1]=list[j];
            j--;
        }
        list[j + 1]=key;
    }
    
    for (int i = 0; i < n; i++)
        cout << list[i] << '\n';
}