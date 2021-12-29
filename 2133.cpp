#include<iostream>
using namespace std;

int d[31];

int main(){
    int n;
    cin>>n;
    d[0]=1;
    d[2]=3;
    for(int i=4;i<=n;i++){
        for(int j=1;j<=n;j++){
            d[i]=3*d[i-2]+2*d[i]
        }
    }
    cout<<d[n];
}