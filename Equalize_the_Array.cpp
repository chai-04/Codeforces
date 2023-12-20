#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int q=s.size();
    int p=n-q+1;
    int ans=n-p;
    cout<<ans;
    return 0;
}