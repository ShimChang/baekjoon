#include<iostream>
using namespace std;

int d[15][15];

int main(){
    int t;
    cin>>t;
    for(int i=0;i<=14;i++){
        d[i][1]=1;
        d[0][i]=i;
    }
    d[0][0]=0;
    while(t--){
        int k,n;
        int sum=0;
        cin>>k>>n;
        for(int i=1;i<=k;i++){
            for(int j=1;j<=n;j++){
                d[i][j]=d[i][j-1]+d[i-1][j];
            }
        }
        cout<<d[k][n]<<'\n';
    }
}