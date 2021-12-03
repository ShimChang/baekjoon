#include<iostream>
using namespace std;

int a=7980;

int main(){
    int esm[3];

    for(int i=0;i<3;i++){
        cin>>esm[i];
    }
    for(int i=1;i<=a;i++){
        if((i-1)%15+1==esm[0] && (i-1)%28+1==esm[1] && (i-1)%19+1==esm[2]){
            cout<<i<<'\n';
            break;
        }
    }
}