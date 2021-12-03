#include<iostream>
using namespace std;

long long d[501][501];
long long a[501][501];


int main(){
    int n;
    cin>>n;

    

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
        }
    }
    d[0][0]=0;
    d[1][1]=a[1][1];

    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            d[i][j]=max(d[i-1][j],d[i-1][j-1])+a[i][j];
        }
    }
    int ans=0;

    for(int i=1;i<=n;i++){
        if(d[n][i]>ans) ans=d[n][i];
    }
    cout<<ans<<'\n';

    



}