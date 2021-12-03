#include<iostream>
#include<vector>
#include<string>
using namespace std;
int num[10001]={0};
int num2[10001]={0};
int main(){
    string s1,s2,tmp;
    int carry=0;

    cin>>s1>>s2;

    if(s2.length()>s1.length()){
        tmp=s2;
        s2=s1;
        s1=tmp;
    }
    vector<int> v(s1.size(),0);

    for(int i=0;i<s1.length();i++){
        num[i]=s1[s1.length()-1-i]-'0';
    }
    for(int i=0;i<s2.length();i++){
        num2[i]=s2[s2.length()-1-i]-'0';
    }

    for(int i=0;i<s1.length();i++){
        if(num[i]+num2[i]+carry>=10) {
            v[i]=num[i]+num2[i]-10+carry;
            carry=1;
        }
        else{
             v[i]=num[i]+num2[i]+carry;
             carry=0;
        }
    }
    if(num[s1.length()-1]+num2[s1.length()-1]+carry>=10){
        v.push_back(1);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[v.size()-1-i];
    }
    

    
    

    
}