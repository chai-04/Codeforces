#include<bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin>>str;
    int n=str.size();
    int start=0;
    int end=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
            start=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(str[i]=='1'){
            end=i;
            break;
        }
    }
    for(int i=start+1;i<end;i++){
            if(str[i]=='0'){
                ans++;
            }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}