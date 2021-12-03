#include<iostream>
using namespace std;

int d[12];

int main(){
    int T;
    cin>>T;
    d[0]=1;
    d[1]=1;

    while(T--){
        int n;
        cin>>n;
        
        for(int i=2;i<=n;i++){
            if(i>=3){
                d[i]=d[i-1]+d[i-2]+d[i-3];
            }
            else{
                d[i]=d[i-1]+d[i-2];
            }
        }
        cout<<d[n]<<'\n';
        
    }
}