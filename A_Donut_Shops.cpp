#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,c;
    cin>>a>>b>>c;
    if(a>=c){
        cout<<"-1 ";
    }
    else{
        cout<<"1 ";
    }

    if(c>=(a*b)){
        cout<<"-1";
    }
    else{
        cout<<b;
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}