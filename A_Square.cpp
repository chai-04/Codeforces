#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    int p,q;
    int x,y;
    cin>>a>>b;
    cin>>p>>q;
    cin>>x>>y;
    int side;
    if(a==p){
        side=abs(b-q);
    }
    else{
        side=abs(b-y);
    }
    int area=(side*side);
    cout<<area<<endl;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    return 0;

}