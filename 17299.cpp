#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int d[1000001]={0};

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> ngf(n);
    stack<int> st;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    st.push(0);

    for(int i=0;i<n;i++){
        d[v[i]]+=1;
    }
    for(int i=1;i<n;i++){
        if(st.empty()){
            st.push(i);
        }
        while(!st.empty()&&d[v[st.top()]]<d[v[i]]){
            ngf[st.top()]=v[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        ngf[st.top()]=-1;
        st.pop();
    }
    for(int i=0;i<n;i++){
        cout<<ngf[i]<<" ";
    }


}