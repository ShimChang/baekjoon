#include<iostream>
using namespace std;

int a=10000000;

int main(){
    int n;
    cin>>n;
    int num=0;
    int ans,ans2;

    for(int i=1;i<=a;i++){
        if(i*i-num>=n){
            ans2=i*i-num-n;
            ans=i;
            break;
        }
        num+=i;
    }

    if(ans%2==0) cout<<ans-ans2<<'/'<<1+ans2;
    else cout<<1+ans2<<'/'<<ans-ans2;
}