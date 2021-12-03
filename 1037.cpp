#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int max=0;
    int min=1000000;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>max) max=v[i];
        if(v[i]<min) min=v[i];  
    }
    cout<<max*min<<'\n';
    
}