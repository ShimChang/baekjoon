#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    long long sum=0;
    stack<int> st;
    cin>>n;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==0) st.pop();
        else st.push(a);
    }
    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }
    cout<<sum<<'\n';
}