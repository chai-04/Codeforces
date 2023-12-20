#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x=0;
    int ans;
    while(t--){
        string name;
        cin>>name;
        if(name[0]=='+'){
            ans=x+1;
        }
        else if(name[0]=='-'){
            ans=x-1;
        }
        else{
            if(name[1]=='+'){
                ans=x+1;
            }
            else{
                ans=x-1;
            }
        }
        x=ans;
    }
    cout<<ans;
    return 0;
}