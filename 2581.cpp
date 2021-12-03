#include<iostream>
using namespace std;
bool check[10001]={false};

int main(){
    int m,n;
    cin>>m>>n;
    int ans;

    check[0]=check[1]=true;

    for(int i=2;i<=n;i++){
        for(int j=i+i;j<=n;j+=i){
            check[j]=true;
        }
    }
    int sum=0;
    for(int i=m;i<=n;i++){
        if(check[i]==false){
            ans=i;
            break;
        }
    }
    for(int i=m;i<=n;i++){
        if(check[i]==false){
            sum+=i;
        }
    }
    if(sum==0) cout<<-1<<'\n';
    else {
        cout<<sum<<'\n'<<ans<<'\n';
    }
}