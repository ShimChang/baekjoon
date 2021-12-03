#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum=1;
    int ans;

    for(int i=0;i<1000000000;i++){
        sum+=6*i;
        if(sum>=n){
            ans=i;
            break;;
        }
    }
    cout<<ans+1<<'\n';
}