#include<iostream>
using namespace std;

int main(){
    int d[10];
    int a[42]={0};
    int ans=0;

    for(int i=0;i<10;i++){
        cin>>d[i]; 
        a[d[i]%42]++;
    }
    for(int i=0;i<42;i++){
        if(a[i]>0) ans++;
    }
    
    
    cout<<ans<<'\n';

    
}