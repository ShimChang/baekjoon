#include<iostream>
using namespace std;

int d[1001];

int main(){
    int m;
    cin>>m;

    d[0]=1;
    d[1]=1;
    
    for(int i=2;i<=m;i++){
        d[i]=d[i-1]+d[i-2];
        d[i]%=10007;
    }
    cout<<d[m];
}