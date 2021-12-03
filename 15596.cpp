#include <vector>
#include<iostream>
using namespace std;
long long sum(std::vector<int> &a) {
	long long ans = 0;
    for(int i=0;i<a.size();i++){
        ans+=a[i];  
    }
	return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sum(a)<<'\n';
}




