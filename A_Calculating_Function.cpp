#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin>>n;
    long long ans=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            ans-=i;
        }
        else{
            ans+=i;
        }
    }
    cout<<ans;
    return 0;
}