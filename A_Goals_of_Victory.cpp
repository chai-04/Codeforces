#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n-1];
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=arr[i];
        }
        int ans=0-sum;
        cout<<ans<<endl;

    }
    return 0;
}