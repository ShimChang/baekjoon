#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int m,n,x,y;
        cin>>m>>n>>x>>y;
        bool bo=false;

        x-=1;
        y-=1;
        for(int k=x;k<(n*m);k+=m){
            if(k%n==y){
                cout<<k+1<<'\n';
                bo=true;
                break;
            }
        }
        if(!bo){
            cout<<-1<<'\n';
        }
    }
}