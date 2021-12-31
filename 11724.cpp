#include<iostream>
#include <vector>
using namespace std;
vector<int> v[1001];
bool check[1001];
void dfs(int node) {
    check[node] = true;
    for (int i=0; i<v[node].size(); i++) {
        int next = v[node][i];
        if (check[next] == false) {
            dfs(next);
        }
    }
}
int main() {
    int n,m;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int cc=0;
    for(int i=1;i<=n;i++){
        if(check[i]==false){
            dfs(i);
            cc++;
        }

    }

    
    cout<<cc;
    
}
  