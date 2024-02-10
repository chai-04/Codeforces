#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n; cin>>n;
    int t; cin>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans;
    ans=(1+arr[0]);
    while(ans<t){
        ans=(ans+arr[ans-1]);
        
    }
    if(ans==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}