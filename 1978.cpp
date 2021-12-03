#include<iostream>
using namespace std;

bool sosu(int a){
    if(a<2){return false;}
    for(int i=2;i*i<=a;i++){
        if(a%i==0){return false;}
    }
    return true;
}

int main(){
    int T;
    cin>>T;
    int sosu2=0;
    while(T--){
        int num;
        cin>>num;
        if(sosu(num)){
            sosu2++;
        }

    }
    cout<<sosu2;
}