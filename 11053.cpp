#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> d(n);

    for(int i=0;i<n;i++){
        d[i]=1;
        for(int j=0;j<i;j++){
            if(a[j]<a[i]&&d[i]<d[j]+1){
                d[i]=d[j]+1;
            }
        }
    }
    cout<<*max_element(d.begin(),d.end())<<'\n';


}
