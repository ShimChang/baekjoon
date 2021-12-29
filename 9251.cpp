#include<iostream>
using namespace std;

int d[1001];

int main(){
    string str,str2;
    cin>>str;
    cin>>str2;
    d[0]=0;
    int len;


    for(int i=1;i<str.length();i++){
        for(int j=0;j<str2.length();j++){
            if(str[i]==str[j]&&d[i]<d[i-1]+1){
                d[i]=d[i-1]+1;
            
            }
        }
    }
    cout<<d[str.length()]<<" "<<d[str2.length()];
    
}