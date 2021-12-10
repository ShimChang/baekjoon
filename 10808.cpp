#include<iostream>
using namespace std;

int main(){
    int alpa[26]={0};
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++){
        alpa[str[i]-97]++;
    }
    for(int i=0;i<26;i++){
        cout<<alpa[i]<<" ";
    }
    
}