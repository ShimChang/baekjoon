#include<iostream>
using namespace std;

int d[31];

int main(){
    int n;
    cin>>n;
    d[0]=1;
    d[2]=3;
    d[4]=5;
    for(int i=4;i<=n;i++){
        d[i]=d[i-2]+d[i-4];
    }
    cout<<d[n];
}