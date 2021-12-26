#include<iostream>
using namespace std;

int n;
bool used[35];
bool used2[35];
bool used3[35];
int ans=0;

void fuc(int num){
    if(num==n){
        ans++;
        return;
    }
    for(int i=0;i<n;i++){
        if(used[num-i]||used2[num+i]||used3[i]) continue;
        used[num-i]=true;
        used2[num+i]=true;
        used3[i]=true;
        fuc(num+1);
        used[num-i]=false;
        used2[num+i]=false;
        used3[i]=false;
        
    }

}
int main(){
    cin>>n;
    fuc(0);
    cout<<ans;

}