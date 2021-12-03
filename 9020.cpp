#include<iostream>
using namespace std;

bool d[10001];

int main(){
    d[0]=d[1]=true;
    for(int i=2;i<=10000;i++){
        if(d[i]==false){
            for(int j=i*i;j<=10000;j+=i){
                d[j]=true;
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int tmp=0;
        for(int i=2;i+i<=n;i++){
            if(d[i]==false&&d[n-i]==false){
               if(tmp<i){
                   tmp=i;
               }  
            }
        }
        cout<<tmp<<' '<<n-tmp<<'\n';

        
    }

}