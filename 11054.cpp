#include<iostream>
#include<vector>
using namespace std;



int main(){
    int n;
    cin>>n;
    vector<int> d(n);
    vector<int> d2(n);
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        d[i]=1;
        for(int j=0;j<i;j++){
            if(d[i]<d[j]+1&&a[i]>a[j]){
                d[i]=d[j]+1;
            }

        }
    }
    for(int i=n-1;i>=0;i--){
        d2[i]=1;
        for(int j=i+1;j<n;j++){
            if(d2[j]+1>d2[i]&&a[i]>a[j]){
                d2[i]=d2[j]+1;
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(ans<d[i]+d2[i]-1){
            ans=d[i]+d2[i]-1;
        }

    }
    cout<<ans<<'\n';



}