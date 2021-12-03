#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> nge(n);
    stack<int> st;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    st.push(0);
    for(int i=1;i<n;i++){
        if(st.empty()){
            st.push(i);
        }

        while(!st.empty()&&v[st.top()]<v[i]){
            nge[st.top()]=v[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()]=-1;
        st.pop();
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }

}