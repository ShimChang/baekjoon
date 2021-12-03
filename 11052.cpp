#include<iostream>
#include<vector>
using namespace std;

int d[1001]; 

int main(){
    vector<int> v;
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
    d[0]=0;
    

    for(int i=1;i<=t;i++){
        for(int j=1;j<=i;j++){
            d[i]=max(d[i],d[i-j]+v[j]);
        }
    }
    cout<<d[t];

    
}