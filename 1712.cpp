#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int ans;

    if(z<=y) ans=-1;
    else ans=x/(z-y)+1;

    cout<<ans<<'\n';
    

    
}