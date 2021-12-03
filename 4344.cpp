#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int sum=0;
        double avg=0;
        int ans=0;

        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];   
        }
        avg=sum/n;
        for(int i=0;i<n;i++){
            if(v[i]>avg) ans++;
        }

        double ans2=(double)ans/n;
        printf("%.3f%%\n",ans2*100);
        


        
    }
}