#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int x1,x2,y1,y2,r1,r2;
        int ans;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        double d;
        d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));

        if(d==r1+r2) ans=1;
        else if(d>r1+r2) ans=0;
        else if(d==0&&r1==r2) ans=-1;
        else if(d==(abs(r1-r2))) ans=1;
        else if(abs(r2-r1)>d) ans=0;
        else if((r1+r2)==d) ans=1;
        else ans=2;

        cout<<ans<<'\n';
        

    }
}