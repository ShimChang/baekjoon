#include<iostream>
#include<vector>
using namespace std;
bool check[101];
vector<int>v[101];
int cnt=0;
void dfs(int node){
    check[node]=true;
    for(int i=0;i<v[node].size();i++){
        int next=v[node][i];
        if(check[next]==false){
            dfs(next);
            cnt++;
        }
    }
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    cout<<cnt;
}