#include<iostream>
using namespace std;

int main(){
    int d[10]={0};
    int a,b,c;
    cin>>a>>b>>c;
    int ans=a*b*c;

    while(ans>0){
        d[ans%10]++;
        ans/=10;
    }
    for(int i=0;i<10;i++){
        cout<<d[i]<<'\n';
    }


}