#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int alpa[26]={0};

    for(int i=0;i<str.length();i++){
        if(97<=str[i]&&str[i]<=122){
            alpa[str[i]-97]++;
        }
        else if(65<=str[i]&&str[i]<=90){
            alpa[str[i]-65]++;
        }
    }
    int temp=0;
    int b;
    for(int i=0;i<26;i++){
        if(temp<alpa[i]){
            temp=alpa[i];
            b=i;
        }
    }
    int a=0;
    for(int i=0;i<26;i++){
        if(alpa[i]==temp) a++;
    }
    char ch;
    ch=(a>1) ?'?':b+65;
    cout<<ch<<'\n';
    
    
}