#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n;
    cin>>n;
    int value;
    int ans=0;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin>>value;
        vec.push_back(value);
    }
    for(int i=n-2;i>=0;i--){
        if(vec[i]>=vec[i+1]){
            if((vec[i+1]-1)>=0){
            vec[i]=(vec[i+1]-1);
            }
            else{
                vec[i]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        ans+=vec[i];
    }
    cout<<ans;
    return 0;
}