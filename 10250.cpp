#include<iostream>
using namespace std;
int d[100][100]={0};

int main(){
    int t;
    cin>>t;
     for(int i=1;i<100;i++){
            for(int j=1;j<100;j++){
                d[i][j]=i*100+j;
            }
        }
    while(t--){      
        int h,w,n;
        cin>>h>>w>>n;
        if(n%h!=0) cout<<d[n%h][n/h+1]<<'\n';
        else cout<<d[h][n/h]<<'\n';
    }
}