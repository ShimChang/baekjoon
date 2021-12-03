#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int m=n;

    
    while(1){
        int x=m/10;
        int y=m%10;
        int xy=(x+y)%10;
        m=xy+(10*y);
        ans++;

        if(n==m) break;
    }
    cout<<ans<<'\n';
}