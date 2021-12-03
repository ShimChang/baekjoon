#include<iostream>
#include<vector>
using namespace std;

int main(){
    

    int n;
    cin>>n;
    vector<int> v(n+1);
    vector<int> a(n+1);
    a[0]=0;

    for(int i=1;i<=n;i++){
        cin>>v[i];
        a[i]=1000*100000;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            a[i]=min(a[i],a[i-j]+v[j]);
        }
    }
    cout<<a[n]<<'\n';
}

