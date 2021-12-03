#include<iostream>
using namespace std;

void prime(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<i<<'\n';
            if(n/i==1) return;
            prime(n/i);
            break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    prime(n);

}