#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    // char arr[n][m];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    vector<string>arr;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    int ans=0;
    for(int j=0;j<m-1;j++){
        if(arr[n-1][j]=='D'){
            ans++;
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[i][m-1]=='R'){
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