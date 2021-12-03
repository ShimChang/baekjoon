#include<iostream>
using namespace std;

int d[1001];
int a[1001];

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        d[i]=1;
        for(int j=1;j<=i;j++){
            if(d[i]<d[j]+1&&a[j]>a[i]){
                d[i]=d[j]+1;
            }

        }
    }

   int ans=0;
   for(int i=1;i<=n;i++){
       if(d[i]>ans) ans=d[i];

   }
    cout<<ans<<'\n';




}