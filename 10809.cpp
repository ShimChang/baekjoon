#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string str;
    cin>>str;
    vector<int> v(26,-1);


    for(int i=0;i<str.length();i++){
        if(97<=str[i]&&str[i]<=122&&v[str[i]-97]==-1){
            v[str[i]-97]=i;
            
        }
        
    }
    for(int i=0;i<26;i++){
        cout<<v[i]<<" ";
    }



}