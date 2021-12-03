#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int n;
    
    cin>>n;
    int ans=n;

    vector<string> str(n);

    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    
    for(int i=0;i<n;i++){  
        bool alpa[26]={false};     
        for(int j=0;j<str[i].length()-1;j++){
            
            alpa[str[i][0]-97]=true;
            if(str[i][j]==str[i][j+1]) continue;
            else if(str[i][j]!=str[i][j+1]&&alpa[str[i][j+1]-97]==false){
                    alpa[str[i][j]-97]=true;
            }  
            else {
                ans--;
                break;  
            }

        }
    }
    cout<<ans<<'\n';
    
}