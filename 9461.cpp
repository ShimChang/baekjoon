#include<iostream>
using namespace std;

long long d[101];

int main(){
    
    d[1]=1;
    d[2]=1;
    d[3]=1;
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        for(int i=4;i<=a;i++){
            d[i]=d[i-3]+d[i-2];
        }
         cout<<d[a]<<'\n';
    }

}