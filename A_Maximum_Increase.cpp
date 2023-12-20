#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    int p[n];
    for(int i=0;i<n;i++){
        p[i]==1;
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j]<arr[j+1]){
                p[i]++;
            }
            else{
                break;
            }

        }
    }
    sort(p,p+n);
    cout<<p[n];
    }
    return 0;


}