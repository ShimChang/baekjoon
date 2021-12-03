#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int a;
        string str;
        cin>>a;
        cin>>str;

        for(int i=0;i<str.length();i++){
            for(int j=0;j<a;j++){
                cout<<str[i];
            }
        }
        cout<<"\n";
    }
}