#include<iostream>
#include<string>
#include<stack>
using namespace std;

void print(stack<string> &s){
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}

int main(){
    string str;
    stack<string> s;
    getline(cin,str);
    bool tag=false;

    for(char ch:str){
        if(ch=='<'){
            print(s);
            tag=true;
            cout<<ch;
        }
        else if(ch=='>'){
            tag=false;
            cout<<ch;
        }
        else if(tag){
            cout<<ch;
        }
        else if(ch==' '){
            if(tag){
                cout<<ch;
            }
            else {
                print(s);
                cout<<ch;
            }
            
        }
        else {
            s.push(ch);
        }
    }


}