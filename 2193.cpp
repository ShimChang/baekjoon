#include<iostream>
using namespace std;
long long d[91][2];
int main(){
    int n;
    cin>>n;

    d[1][0]=0;
    d[1][1]=1;

    for(int i=2;i<=n;i++){
        for(int j=0;j<2;j++){
            if(j==0) d[i][j]=(d[i-1][0]+d[i-1][1]);
            if(j==1) d[i][j]=d[i-1][0];
        }
    }
    long long ans=d[n][0]+d[n][1];

    cout<<ans<<'\n';

}