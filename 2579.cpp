#include<iostream>
#include<vector>
using namespace std;

int d[301]={0};

int main(){
    int n;
    cin>>n;
    vector<int> a(n+1,0);
    int cnt=0;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    d[1]=a[1];
    d[2]=a[1]+a[2];

    for(int i=3;i<=n;i++){
        d[i]=max(d[i-3]+a[i-1]+a[i],d[i-2]+a[i]);
    }

    
   


    
    cout<<d[n]<<'\n';


}