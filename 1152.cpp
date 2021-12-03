#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    int ans=0;

    if(str==" ") ans=-1;

    for(int i=1;i<str.length()-1;i++){
        if(str[i]==' ') ans++;
    }

    cout<<ans+1<<'\n';
}
