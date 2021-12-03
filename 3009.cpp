#include<iostream>
using namespace std;

int main(){
    int x[3];
    int y[3];
    int ansx,ansy;

    for(int i=0;i<3;i++){
        cin>>x[i]>>y[i];
    }
    if(x[0]==x[1]) ansx=x[2];
    else if(x[1]==x[2]) ansx=x[0];
    else ansx=x[1];
    if(y[0]==y[1]) ansy=y[2];
    else if(y[1]==y[2]) ansy=y[0];
    else ansy=y[1];

    cout<<ansx<<' '<<ansy<<'\n';
    

    
}