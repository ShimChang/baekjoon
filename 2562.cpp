#include<iostream>
using namespace std;

int main(){
    int d[9];
    int ans=0;
    int ans2;
    for(int i=0;i<9;i++){
        cin>>d[i];
        if(ans<d[i]){
            ans=d[i];
            ans2=i;
        }
    }
    cout<<ans<<'\n';
    cout<<ans2+1<<'\n';
    

}