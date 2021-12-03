#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    queue<int> qu;
    
    while(n--){
        string str;
        cin>>str;

        if(str=="push"){
            int pu;
            cin>>pu;
            qu.push(pu);
        }
        else if(str=="pop"){
            if(!qu.empty()){
                cout<<qu.front()<<'\n';
                qu.pop();
            }
            else cout<<-1<<'\n';
        }
        else if(str=="size"){
            cout<<qu.size()<<'\n';
        }
        else if(str=="empty"){
            if(qu.empty()) cout<<1<<'\n';
            else cout<<0<<'\n';
        }
        else if(str=="front"){
            if(!qu.empty()){
                cout<<qu.front()<<'\n';
            }
            else cout<<-1<<'\n';
        }
        else if(str=="back"){
            if(!qu.empty()){
                cout<<qu.back()<<'\n';
            }
            else cout<<-1<<'\n';
        }
    }
}