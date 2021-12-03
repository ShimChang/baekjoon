#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int ans;
    ans=a*b;

    while(b>0){
        cout<<a*(b%10)<<'\n';
        b/=10;
    }
    cout<<ans<<'\n';

    
    

    
}