#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int ans=0;

    for(int i=0;i<str.length();i++){
        if(str[i]=='c'&&str.length()-1>=i){
            if(str[i+1]=='='||str[i+1]=='-'){
                ans++;
                i+=1;
                
            }
            else ans++;
        }
        else if(str[i]=='d'){
            if(str[i+1]=='-'&&str.length()-1>=i){
                ans++;
                i+=1;
                
            }
            else if(str[i+1]=='z'&&str[i+2]=='='&&str.length()-2>=i){
                ans++;
                i+=2;
                
            }
            else ans++;
        }
        else if(str[i]=='l'&&str[i+1]=='j'&&str.length()-1>=i){
            ans++;
            i+=1;
            
        }
        else if(str[i]=='n'&&str[i+1]=='j'&&str.length()-1>=i){
            ans++;
            i+=1;
            
        }
        else if(str[i]=='s'&&str[i+1]=='='&&str.length()-1>=i){
            ans++;
            i+=1;
            
        }
        else if(str[i]=='z'&&str[i+1]=='='&&str.length()-1>=i){
            ans++;
            i+=1;
            
        }
        else ans++;
    }
    cout<<ans<<'\n';

}