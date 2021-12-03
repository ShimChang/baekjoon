#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    deque<int> de;
    while(n--){
        string str;
        cin>>str;
        if(str=="push_back"){
            int a;
            cin>>a;
            de.push_back(a);
        }
        else if(str=="push_front"){
            int a;
            cin>>a;
            de.push_front(a);
        }
        else if(str=="pop_front"){
            if(!de.empty()){
                cout<<de.front()<<'\n';
                de.pop_front();
            }
            else cout<<-1<<'\n';
        }
        else if(str=="pop_back"){
            if(!de.empty()){
                cout<<de.back()<<'\n';
                de.pop_back();
            }
            else cout<<-1<<'\n';
        }
        else if(str=="size"){
            cout<<de.size()<<'\n';
        }
        else if(str=="empty"){
            if(de.empty()){
                cout<<1<<'\n';
            }
            else cout<<0<<'\n';
        }
        else if(str=="front"){
            if(!de.empty()){
                cout<<de.front()<<'\n';
            }
            else cout<<-1<<'\n';
        }
        else if(str=="back"){
            if(!de.empty()){
                cout<<de.back()<<'\n';
            }
            else cout<<-1<<'\n';
        }
        
    }
}