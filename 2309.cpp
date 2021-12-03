#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int d[9];
    int ans=0;
    for(int i=0;i<9;i++){
        cin>>d[i];
        ans+=d[i];
    }
    sort(d,d+9);
    int ans2=ans-100;
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(d[i]+d[j]==ans2){
                for(int k=0;k<9;k++){
                    if(k==i||k==j){
                        continue;
                    }
                    cout<<d[k]<<'\n';
                }
                return 0;
            }
        }
    }

}