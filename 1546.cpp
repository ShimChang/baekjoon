#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<double> v(n);
    int temp=-1;
    double cnt=0;

    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>temp) temp=v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=v[i]/temp*100;
        cnt+=v[i];
    }
    printf("%.2f\n",cnt/n);


}