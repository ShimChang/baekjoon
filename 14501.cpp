#include<iostream>
#include<vector>
using namespace std;

int d[17];

int main(){
    int n;
    cin>>n;
    vector<int> t(n+2);
    vector<int> p(n+2);

    for(int i=1;i<=n;i++){
        cin>>t[i];
        cin>>p[i];
    }
    for(int i=2;i<=n+1;i++){
        for(int j=1;j<i;j++){
            if(j+t[j]<=i){
                 d[i]=max(d[i],d[j]+p[j]);
            }
        }
    }
    
    cout<<d[n+1];

}