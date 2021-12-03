#include<iostream>
#include<algorithm>
using namespace std;
int d[1001][3];
int a[1001][3];

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    

    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            if(j==0){
                d[i][0]=min(d[i-1][1],d[i-1][2])+a[i][0];
            }
            if(j==1){
                d[i][1]=min(d[i-1][0],d[i-1][2])+a[i][1];
            }
            if(j==2){
                d[i][2]=min(d[i-1][0],d[i-1][1])+a[i][2];
            }

        }
    }


    cout<<min(min(d[n][0],d[n][1]),d[n][2])<<'\n';

}