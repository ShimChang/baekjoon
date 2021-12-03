#include<iostream>
using namespace std;

int convert(int num){
    int a,b,c;
    a=num%10*100;
    num/=10;
    b=num%10*10;
    c=num/=10;
    return a+b+c;
}

int main(){
    int a,b;
    cin>>a>>b;

    if(convert(a)>convert(b)) cout<<convert(a)<<'\n';
    else cout<<convert(b)<<'\n';

    
}