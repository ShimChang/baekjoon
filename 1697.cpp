#include<iostream>
#include<queue>
using namespace std;

int dist[100002];

int n,k;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    queue<int> q;
    q.push(n);
    dist[n]=1;

    while(dist[k]==0){
        int a=q.front();
        q.pop();
        if(a+1<=100000&&dist[a+1]==0) {
            dist[a+1]=dist[a]+1;
            q.push(a+1);
        }
        if(a-1>=0&&dist[a-1]==0) {
            dist[a-1]=dist[a]+1;
            q.push(a-1);
        }
        if(2*a<=100000&&dist[2*a]==0) {
            dist[2*a]=dist[a]+1;
            q.push(2*a);
        }
    }
    cout<<dist[k]-1;
    
}