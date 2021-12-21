#include<iostream>
#include<cmath>
using namespace std;

int z(int n,int r,int c){
    int half=pow(2,n-1);
    if(n<1) return 0;
    if(r<half&&c<half) return z(n-1,r,c);
    if(r<half&&c>=half) return half*half+z(n-1,r,c-half);
    if(r>=half&&c<half) return 2*half*half+z(n-1,r-half,c);
    return half*half*3+z(n-1,r-half,c-half);
    
}


int main(){
    int n,r,c;
    cin>>n>>r>>c;
    cout<<z(n,r,c)<<'\n';

}