#include<iostream>
using namespace std;

int d[1000001];
int a[102];

int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    fill(d,d+1000001,10001);
    d[0]=0;
    for(int i=0;i<n;i++){
        for(int j=a[i];j<=k;j++){
           d[j]=min(d[j],d[j-a[i]]+1);
        }
    }
    if(d[k]==10001) cout<<-1;
    else cout<<d[k];
}