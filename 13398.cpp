#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n; 
    cin>>n;

    vector<int> a(n);
    vector<int> d(n);
    vector<int> d2(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        d[i]=a[i];
        if(i==0) continue;
        if(d[i-1]+a[i]>d[i]){
            d[i]=d[i-1]+a[i];
        }  
    }
    for(int i=n-1;i>=0;i--){
        d2[i]=a[i];
        if(i==n-1) continue;
        if(d2[i+1]+a[i]>d2[i]){
            d2[i]=d2[i+1]+a[i];
        }
    }
    int ans=d[0];
    


    for(int i=1;i<n;i++){
        if(d[i]>ans){
            ans=d[i];
        }
    }
    for(int i=1;i<n-1;i++){
        if(d[i-1]+d2[i+1]>ans){
            ans=d[i-1]+d2[i+1];
        }
    }
    cout<<ans<<'\n';

}