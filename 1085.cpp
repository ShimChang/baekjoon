#include<iostream>
using namespace std;

int main(){
    int x,y,w,h;
    cin>>x>>y>>w>>h;
    int W=w-x;
    int H=h-y;
    int ans=500;

    if(ans>x) ans=x;
    if(ans>y) ans=y;
    if(ans>W) ans=W;
    if(ans>H) ans=H;
    cout<<ans<<'\n';
    
}