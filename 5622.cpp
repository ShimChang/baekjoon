#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int ans=0;

    for(int i=0;i<str.length();i++){
        if(str[i]=='A'||str[i]=='B'||str[i]=='C') ans+=3;
        if(str[i]=='D'||str[i]=='E'||str[i]=='F') ans+=4;
        if(str[i]=='G'||str[i]=='H'||str[i]=='I') ans+=5;
        if(str[i]=='J'||str[i]=='K'||str[i]=='L') ans+=6;
        if(str[i]=='M'||str[i]=='N'||str[i]=='O') ans+=7;
        if(str[i]=='P'||str[i]=='Q'||str[i]=='R'||str[i]=='S') ans+=8;
        if(str[i]=='T'||str[i]=='U'||str[i]=='V') ans+=9;
        if(str[i]=='W'||str[i]=='X'||str[i]=='Y'||str[i]=='Z') ans+=10;
    }
    cout<<ans<<'\n';
}