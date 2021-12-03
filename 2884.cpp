#include<iostream>
using namespace std;

int main(){
    int h,m;
    cin>>h>>m;

    if(m>=45) cout<<h<<" "<<m-45<<'\n';
    else if(m<45&&h>=1) {
        m=m-45+60;
        h=h-1;  
        cout<<h<<" "<<m<<'\n';  
    }
    else if(m<45&&h<1){
        m=m-45+60;
        h=23;
        cout<<h<<" "<<m<<'\n';  
    } 


}