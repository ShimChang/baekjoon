#include<iostream>
using namespace std;

int d[1001];

int main(){
    string str,str2;
    cin>>str;
    cin>>str2;
    d[0]=0;
    int len;
    if(str.length()>str2.length()) len=str.length();
    else len=str2.length();

    for(int i=0;i<len;i++){
        
    }
    cout<<d[str.length()]<<" "<<d[str2.length()];
    
}