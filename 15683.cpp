#include<iostream>
using namespace std;

int cctv[10][10];
int cam[10][10];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>cctv[i][j];
            if(cctv[i][j]==6) cam[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(cctv[i][j]==5){
                for(int k=0;k<n;k++){
                    if(cam[i][k]==-1||cam[k][j]==-1)
                    cam[i][k]=5;
                    cam[k][j]=5;
                }

            }
        }
    }


}