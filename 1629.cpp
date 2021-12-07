#include<iostream>
using namespace std;

long long mod(int a,int b,int c){
    if(b==1) return a%c;
    long long val=mod(a,b/2,c);
    val=val*val%c;
    if(b%2==0) return val;
    return val*a%c;
}
    

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<mod(a,b,c)<<'\n';
    
}