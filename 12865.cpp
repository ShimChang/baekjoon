#include<iostream>
using namespace std;

int d[101];
int d2[101];
int w[101];
int v[101];

int main(){
    int n,k;
    cin>>n>>k;

    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    for(int i=0;i<n;i++){
        if(d2[i]<=k){
         d[i]=max(d[i],d[i-1]+v[i]);
         d2[i]=d2[i-1]+w[i];
        }
    }

}